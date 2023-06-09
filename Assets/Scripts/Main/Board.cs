using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Tilemaps;

[System.Serializable]
public class Board : MonoBehaviour{
    public Tilemap tilemap {get; private set;}

    public Tile tileUnknown;
    public Tile tileEmpty;
    public Tile tileMine;
    public Tile tileExploded;
    public Tile tileFlag;
    public Tile tileNum1;
    public Tile tileNum2;
    public Tile tileNum3;
    public Tile tileNum4;
    public Tile tileNum5;
    public Tile tileNum6;
    public Tile tileNum7;
    public Tile tileNum8;

    public GameObject Box;

    public Game game;


    public bool isTile = false;

    Cell cell;
   private void Awake() {
        tilemap = GetComponent<Tilemap>();
        game = FindObjectOfType<Game>();
   }
   public void Draw(Cell[,] state){
        //행의갯수
        int width = state.GetLength(0);

        //열의 갯수
        int height = state.GetLength(1);

       
            for (int x = 0; x < width; x++)
            {
                for (int y = 0; y < height; y++)
                {
                    cell = state[x, y];
                    tilemap.SetTile(cell.position, GetTile(cell));
                    if (!isTile)
                    {
                        var tile = Instantiate(Box, new Vector3Int(cell.position.x,0,cell.position.y), Quaternion.identity);
                    }
                }
            }
        Debug.Log("Draw");

        isTile = true;
   }
   private Tile GetTile(Cell cell){
        if(cell.revealed){
            return GetRevealedTile(cell);
        }
        else if(cell.flagged){
            return tileFlag;
        }
        else{
            return tileUnknown;
        }
   }
   private Tile GetRevealedTile(Cell cell){
        switch(cell.type){
            case Cell.Type.Empty : return tileEmpty;
            case Cell.Type.Mine : return cell.exploded ? tileExploded : tileMine;
            case Cell.Type.Number : return GetNumberTile(cell);
            default : return null;
        }
   }

   private Tile GetNumberTile(Cell cell){
        switch(cell.number){
            case 1 : return tileNum1;
            case 2 : return tileNum2;
            case 3 : return tileNum3;
            case 4 : return tileNum4;
            case 5 : return tileNum5;
            case 6 : return tileNum6;
            case 7 : return tileNum7;
            case 8 : return tileNum8;
            default : return null;
        }
   }

}
