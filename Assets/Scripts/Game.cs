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

    public GameObject Box;

    private void Awake(){
        board = GetComponentInChildren<Board>();
    }

    private void Start() {
        NewGame();
    }

    private void NewGame(){
        state = new Cell[width,height];

        GetnerateCells();

        board.Draw(state);
    }

    private void GetnerateCells(){
        for(int x = 0; x < width; x++){
            for(int y = 0; y < height; y++){
                Cell cell = new Cell();
                cell.position = new Vector3Int(x,y,0);
                var tile = Instantiate(Box, new Vector3Int(x,0,y), Quaternion.identity);

                cell.type = Cell.Type.Empty;
                state[x,y] = cell;
            }
        }
    }
}
