using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using ExitGames.Client.Photon;
using Player = Photon.Realtime.Player;
using System.IO;
using System;

public class Game : MonoBehaviourPunCallbacks
{

    private static Game _instance;
    public static Game Instance {get {return _instance;}}
    public int width;
    public int height;
    public int mineCount;

    private Board board;
    public Cell[,] state;
    //public Cell[,] mine;

    public List<(int, int)> mines = new List<(int, int)>();
    public List<int> Xdata = new List<int>();
    public List<int> Ydata = new List<int>();
    public bool gameover;
    public bool isclickButton = false;
    public bool isFlagButton = false;

    private GameObject player;
    private Animator animator;
    public PhotonView PV;
    public string mineString;

    private void OnValidate(){
        mineCount = Mathf.Clamp(mineCount,0,width*height);
    }

    private Camera cam = null;
    private void Awake(){

        if(_instance != null && _instance != this){
            Destroy(this.gameObject);
        }
        else{
            _instance = this;
        }
        board = GetComponentInChildren<Board>();
    }
  
    private void Start() {
        cam = Camera.main;
        player = GameObject.Find("Player(Clone)");
        SoundManager.Instance.PlayBGM("TitleBGM");
        animator = player.GetComponent<Animator>();
        PV = GetComponent<PhotonView>();
        NewGame();
    }

    public override void OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer){
        Debug.Log("손님 입장");
                state = new Cell[width,height];
                gameover = false;
                GetnerateCells();
                board.Draw(state);
    }

    private void NewGame(){
            // state = new Cell[width,height];
            // gameover = false;
            // GetnerateCells();

            if(PhotonNetwork.IsMasterClient == true){
                Debug.Log("마스터클라");
                state = new Cell[width,height];
                gameover = false;
                GetnerateCells();
                GenerateMines();    
                GenerateNumbers();

                board.Draw(state); 
            }
            //PV.RPC("ReceiveMineData", RpcTarget.OthersBuffered, TreeString, mines);
        
    }
    
    private void GetnerateCells(){
        for(int x = 0; x < width; x++){
            for(int y = 0; y < height; y++){
                Cell cell = new Cell();
                cell.position = new Vector3Int(x,y,0);
                cell.type = Cell.Type.Empty;
                state[x,y] = cell;
            }
        }
    }
    
     [PunRPC]
    void ReceiveMineData(List<(int, int)> mineData)
    {
        mines = mineData as List<(int, int)>;
        Debug.Log(mines.Count);
        
        foreach (var mine in mines)
        {
            state[mine.Item1, mine.Item2].type = Cell.Type.Mine;
            Debug.Log(mines[mine.Item1].Item1 + " : " + mines[mine.Item2].Item2);
        }
    }
    private void GenerateMines(){
            for(int i=0; i<mineCount; i++){
            
            int x = UnityEngine.Random.Range(0, width);
            int y = UnityEngine.Random.Range(0, height);

            while(state[x,y].type == Cell.Type.Mine){
                x++;
                if(x >= width){
                    x = 0;
                    y++;

                    if(y >= height){
                        y = 0;
                    }
                }
            }

            state[x,y].type = Cell.Type.Mine;
            
            mines.Add((x, y));
        }
        //PV.RPC("ReceiveMineData", RpcTarget.OthersBuffered, mines, mines);
    }
   
    private void GenerateNumbers(){
        for(int x = 0; x < width; x++){
            for(int y = 0; y < height; y++){
                Cell cell = state[x,y];

                if(cell.type == Cell.Type.Mine){
                    continue;
                }

                cell.number = CountMines(x,y);

                if(cell.number > 0){
                    cell.type = Cell.Type.Number;
                }
                state[x,y] = cell;
            }
        }
                Debug.Log("generateNumber");

    }

    private int CountMines(int cellX, int cellY){
        int count = 0;

        for(int adjacentX = -1; adjacentX <= 1; adjacentX++){
            for(int adjacentY = -1; adjacentY <= 1; adjacentY++){

                if(adjacentX == 0 && adjacentY == 0){
                    continue;
                }

                int x = cellX + adjacentX;
                int y = cellY + adjacentY;

                if(GetCell(x,y).type == Cell.Type.Mine){
                    count ++;
                }
            }
        }

        return count;
    }

    [PunRPC]
    public void Flag(Vector3 worldPosition){
       Vector3Int CellPosition = board.tilemap.WorldToCell(worldPosition);

            Cell cell = GetCell(CellPosition.x, CellPosition.y);

            if(cell.type == Cell.Type.InValid || cell.revealed){
                return;
            }

            cell.flagged = !cell.flagged;
            state[CellPosition.x, CellPosition.y] = cell;
            board.Draw(state);

    }
    [PunRPC]
    public void Reveal(Vector3 worldPosition){

            Vector3Int CellPosition = board.tilemap.WorldToCell(worldPosition);

            Cell cell = GetCell(CellPosition.x, CellPosition.y);

            if(cell.type == Cell.Type.InValid || cell.revealed || cell.flagged){
                return;
            }

            switch(cell.type){
                case Cell.Type.Mine : Explode(cell); break;
                case Cell.Type.Empty : Flood(cell); CheckWinCondition(); break;
                // case Cell.Type.Mine : PV.RPC("Explode", RpcTarget.AllBuffered,cell); break;
                // case Cell.Type.Empty : PV.RPC("Flood", RpcTarget.AllBuffered,cell); PV.RPC("CheckWinCondition", RpcTarget.AllBuffered); break;
                default :  cell.revealed = true;
                state[CellPosition.x, CellPosition.y] = cell;
                CheckWinCondition();
                //PV.RPC("CheckWinCondition", RpcTarget.AllBuffered);
                break;
            }

            if(cell.type == Cell.Type.Empty){
                 Flood(cell);
                //PV.RPC("Flood", RpcTarget.AllBuffered,cell);
            }

            cell.revealed = true;
            state[CellPosition.x, CellPosition.y] = cell;
            board.Draw(state);


    }

    public void IsclickButton(){
        isclickButton = true;
    }

    public void IsFlagButton(){
        isFlagButton = true;
    }

    private void Flood(Cell cell){
        if (cell.revealed) return;
        if (cell.type == Cell.Type.Mine || cell.type == Cell.Type.InValid) return;

        cell.revealed = true;
        state[cell.position.x, cell.position.y] = cell;

        if(cell.type == Cell.Type.Empty){
            Flood(GetCell(cell.position.x - 1, cell.position.y));
            Flood(GetCell(cell.position.x + 1, cell.position.y));
            Flood(GetCell(cell.position.x, cell.position.y - 1));
            Flood(GetCell(cell.position.x, cell.position.y + 1));
            // PV.RPC("Flood", RpcTarget.AllBuffered,cell,GetCell(cell.position.x - 1, cell.position.y));
            // PV.RPC("Flood", RpcTarget.AllBuffered,cell,GetCell(cell.position.x + 1, cell.position.y));
            // PV.RPC("Flood", RpcTarget.AllBuffered,cell,GetCell(cell.position.x, cell.position.y - 1));
            // PV.RPC("Flood", RpcTarget.AllBuffered,cell,GetCell(cell.position.x, cell.position.y + 1));

        }
    }
   
    private void Explode(Cell cell){

        //player.GetComponent<PhotonView>().RPC("Dead", RpcTarget.AllBuffered);

        Debug.Log("Game Over!");
        animator.SetTrigger("IsLoseing");
        SoundManager.Instance.PlaySFX("Lose");

        player.transform.rotation = Quaternion.Euler(0f,180f,0f);
        gameover = true;

        cell.revealed = true;
        cell.exploded = true;
        state[cell.position.x, cell.position.y] = cell;

        for(int x = 0; x < width; x++){
            for(int y = 0; y < height; y++){
                cell = state[x,y];

                if(cell.type == Cell.Type.Mine){
                    cell.revealed = true;
                    state[x,y] = cell;
                }
            }
        }

    }
 
    private void CheckWinCondition(){
        for(int x = 0; x < width; x++){
            for(int y = 0; y <height; y++){
                Cell cell = state[x,y];

                if(cell.type != Cell.Type.Mine && !cell.revealed){
                    return;
                }
            }
        }

        //player.GetComponent<PhotonView>().RPC("Win", RpcTarget.AllBuffered);

        animator.SetTrigger("IsWin");
        Debug.Log("Win!");
        SoundManager.Instance.PlaySFX("Win");

        player.transform.rotation = Quaternion.Euler(0f,180f,0f);

         for(int x = 0; x < width; x++){
            for(int y = 0; y < height; y++){
                Cell cell = state[x,y];

                if(cell.type == Cell.Type.Mine){
                    cell.revealed = true;
                    state[x,y] = cell;
                }
            }
        }
    }

    private Cell GetCell(int x, int y){
        if(IsValid(x,y)){
            return state[x,y];
        }
        else{
            return new Cell();
        }
    }

    private bool IsValid(int x, int y){
        return x >= 0 && x < width &&  y >= 0 && y < height;
    }

    
    private void Dead(){
        Debug.Log("Game Over!");
        animator.SetTrigger("IsLoseing");
        SoundManager.Instance.PlaySFX("Lose");

        player.transform.rotation = Quaternion.Euler(0f,180f,0f);
        gameover = true;
    }

    
    private void Win(){
        animator.SetTrigger("IsWin");
        Debug.Log("Win!");
        SoundManager.Instance.PlaySFX("Win");

        player.transform.rotation = Quaternion.Euler(0f,180f,0f);
    }
}




