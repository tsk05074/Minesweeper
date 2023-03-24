using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Game : MonoBehaviour
{
   public int width = 16;
    public int height = 16;
    public int mineCount = 32;

    private Board board;
    private Cell[,] state;
    private bool gameover;

    private Camera cam = null;
    private void Awake(){
        board = GetComponentInChildren<Board>();
    }

    private void Start() {
        NewGame();
        cam = Camera.main;
    }

    private void NewGame(){
        state = new Cell[width,height];

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
            //state[x,y].revealed = true;
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

                //cell.revealed = true;
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

    private void Update(){
        if(Input.GetMouseButtonDown(1)){
            Flag();
        }
        else if(Input.GetMouseButtonDown(0)){
            Reveal();
        }
    }

    private void Flag(){
        Ray ray = cam.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if(Physics.Raycast(ray, out hit)){
            Vector3Int CellPosition = board.tilemap.WorldToCell(hit.point);

            Cell cell = GetCell(CellPosition.x, CellPosition.y);

            if(cell.type == Cell.Type.InValid || cell.revealed){
                return;
            }

            cell.flagged = !cell.flagged;
            state[CellPosition.x, CellPosition.y] = cell;
            board.Draw(state);
            }
    }

    private void Reveal(){
        Ray ray = cam.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if(Physics.Raycast(ray, out hit)){
            Vector3Int CellPosition = board.tilemap.WorldToCell(hit.point);

            Cell cell = GetCell(CellPosition.x, CellPosition.y);

            if(cell.type == Cell.Type.InValid || cell.revealed || cell.flagged){
                return;
            }

            cell.revealed = true;
            state[CellPosition.x, CellPosition.y] = cell;
            board.Draw(state);
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
