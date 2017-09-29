#include <iostream>

void printRect(int height, int width);

int main(){

  printRect(height,width);
}


/*
ok the idea is that it's a graphic division machine.
 _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
|         1 |         2 |         3 |         4 |         5 |         6 | 1 | 2 |
|_ _ _ _ _ _|_ _ _ _ _ _|_ _ _ _ _ _|_ _ _ _ _ _|_ _ _ _ _ _|_ _ _ _ _ _|_ _|_ _|
this one is 20/3 = 6 r2
a box is 4 characters wide and 2 lines tall.

*/



void printSquare(int side,int unit){
  for (int j = 0; j <= side * unit; j++){
    for (int i = 0; i < side*unit; i++) {
      if(j==0)cout << " _";
      else if (j%unit){
        if (i%unit==0)cout << "| ";
        else cout << "  ";
      }
      else if(i%unit==0)cout << "|_";
      else cout << " _";
    }
    if(j!=0)cout << "|\n";
    else cout << endl;
  }
}
