#include <iostrea>

void printRect(int height, int width);

int main(){

  printRect(height,width);
}


/*
 _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
|       |       |       |       |       |       |       |       |       |       |
|   1   |   2   |   3   |   4   |   5   |   6   |   7   |   8   |   9   |   10  |
|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|
|       |       |       |       |       |       |       |       |       |       |
|   2   |   4   |   6   |   8   |   10  |   12  |   14  |   16  |   18  |   20  |
|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|
|       |       |       |       |       |       |       |       |       |       |
|   3   |   6   |   9   |   12  |   15  |   18  |   21  |   24  |   27  |   30  |
|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|
|       |       |       |       |       |       |       |       |       |       |
|   4   |   8   |   12  |   16  |   20  |   24  |   28  |   32  |   36  |   40  |
|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|
|       |       |       |       |       |       |       |       |       |       |
|   5   |   10  |   15  |   20  |   25  |   30  |   35  |   40  |   45  |   50  |
|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|
|       |       |       |       |       |       |       |       |       |       |
|   6   |   12  |   18  |   24  |   30  |   36  |   42  |   48  |   56  |   60  |
|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|_ _ _ _|
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
