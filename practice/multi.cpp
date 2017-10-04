#include <iostream>

using namespace std;

void printRect(int height, int width, int bheight, int bwidth);
void getRecSize(string choice);

int main(){
  cout << "what kind of rectangle would you like?\n";
  cout << "for one built of SQUARES, press 's'\n";
  cout << "for one made of adjustible RECTANGLES, press 'r' ";
  string choice;
  cin >> choice;
  getRecSize(choice);
  cout << "\nPress any key, then RETURN to exit ";
  int junk;
  cin >> junk;

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
void getRecSize(string choice){
  int height;
  int width;
  int bheight;
  int bwidth;
  cout << "height of rectange? ";
  cin >> height;
  cout << "width of rectange? ";
  cin >> width;
  if (choice != "r"){
    cout << "size of unit sqares? ";
    cin >> bheight;
    bwidth = bheight;
  }
  else{
    cout << "height of unit squares? ";
    cin >> bheight;
    cout << "width of unit square? ";
    cin >> bwidth;
  }
  printRect(height,width, bheight, bwidth);
}

void printRect(int height, int width, int bheight, int bwidth){
  for (int row =0; row <=(bheight*height); row++){
    //first row
    if (row == 0){
      for (int col = 0; col < (bwidth*width); col++)cout << " _";
      cout << " \n";
    }
    //middle rows
    else if (row%bheight !=0){
      for (int col = 0; col < (bwidth*width); col++){
        //edgle columns
        if (col%bwidth == 0) cout << "| ";
        //middle columns
        else cout << "  ";
      }
      cout << "|\n";
    }
    //bottom rows
    else{
      for (int col = 0; col < (bwidth*width); col++){
        //edgle columns
        if (col%bwidth ==0)cout << "|_";
        else cout << " _";
      }
      cout << "|\n";
    }
  }

}
