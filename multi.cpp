#include <iostream>

using namespace std;

void printRect(int height, int width);

int main(){
  int height = 3;
  int width = 3;
  printRect(height,width);
}
/*
 _ _
|   |
*/

/*
ok the idea is that it's a graphic division machine.
 _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
|         1 |         2 |         3 |         4 |         5 |         6 | 1 | 2 |
|_ _ _ _ _ _|_ _ _ _ _ _|_ _ _ _ _ _|_ _ _ _ _ _|_ _ _ _ _ _|_ _ _ _ _ _|_ _|_ _|
this one is 20/3 = 6 r2
a box is 4 characters wide and 2 lines tall.

*/

void printRect(int height, int width){
  int bheight = 2;
  int bwidth = 2;
  for (int row =0; row <bheight*height; row++){
    //first row
    if (row == 0){
      for (int col = 0; col < (bwidth*width); col++)cout << " _";
      cout << endl;
    }
    //middle rows
    else if (row%bheight !=0){
      for (int col = 0; col < (bwidth*width); col++){
        //edgle columns
        if (col%bwidth == 0){
          //last edgle
          if (col+1 == (bwidth*width))cout << "|\n";
          //all other edges
          else cout << "| ";
        }
        //middle columns
        else cout << "  ";
      }
    }
    //bottom rows
    else{
      for (int col = 0; col < (bwidth*width); col++){
        if (col%bwidth ==0){
          if(col+1 ==bwidth* width)cout << "|\n";
          else cout << "|_";
        }
        else if (col%bwidth !=0){
          cout << " _";
        }
      }
    }
  }

}
