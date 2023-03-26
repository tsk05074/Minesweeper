using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Game : MonoBehaviour
{
    private static Game _instance;
    public static Game Instance {get {return _instance;}}
   public int width;
    public int height;
    public int mineCount;

    private Board board;
    private Cell[,] state;
    public bool gameover;
    public bool isclickButton = false;
    public bool isFlagButton = false;

    public GameObject player;
    private Animator animator;

    
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
        player.transform.position = new Vector3(width/2f, height / 2f, 1f);
    }

    private void Start() {
        NewGame();
        cam = Camera.main;
        SoundManager.Instance.PlayBGM("TitleBGM");
        animator = player.GetComponent<Animator>();
    }

    private void NewGame(){
        state = new Cell[width,height];
        gameover = false;

        GetnerateCells();
        GenerateMines();
        GenerateNumbers();

        board.Draw(state);
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

    private void GenerateMines(){
        for(int i=0; i<mineCount; i++){
            int x = Random.Range(0, width);
            int y = Random.Range(0, height);

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
        }
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

    public void Reveal(Vector3 worldPosition){

            Vector3Int CellPosition = board.tilemap.WorldToCell(worldPosition);

            Cell cell = GetCell(CellPosition.x, CellPosition.y);

            if(cell.type == Cell.Type.InValid || cell.revealed || cell.flagged){
                return;
            }

            switch(cell.type){
                case Cell.Type.Mine : Explode(cell); break;
                case Cell.Type.Empty : Flood(cell); CheckWinCondition(); break;
                default :  cell.revealed = true;
                state[CellPosition.x, CellPosition.y] = cell;
                CheckWinCondition();
                break;
            }

            if(cell.type == Cell.Type.Empty){
                Flood(cell);
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
        }
    }

    private void Explode(Cell cell){
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
        animator.SetTrigger("IsWin");
        Debug.Log("Win!");
        SoundManager.Instance.PlaySFX("Win");

        player.transform.rotation = Quaternion.Euler(0f,180f,0f);

        gameover = true;

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
}
