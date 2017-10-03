#include <iostream>
#include <string>

using namespace std;

void printStars(int row, int col);
void topStripes(int c);
void printStripes(int row, int col);


int main() {
  int rows= 5;
  int cols = 10;
  printStars(rows, cols);
  printStripes(rows, cols);
  return 0;
}

void printStars(int row, int col){
  for (int i=0; i <(col-1);i++){
    for (int j=0; j <row;j++){
      if (i%2==0) cout << "*    ";
      else if (j==0)cout << "   *";
      else cout << "    *";
    }
    if (i%2 ==0){
      cout << "*";
      topStripes(col);
    }
    else cout << endl;
  }
}

void topStripes(int c){
  cout << "    ";
  string str = "";
  for (int i = 0;i<(3*c);i++){
    if (i%2 ==0)str += "_";
    else str += "__";
  }
  cout << str << endl;
}

void printStripes(int row, int col){
  for (int i = 0; i < (2*row); i++){
    for (int j=0; j < (5*col); j++){
      if(i%2==0) cout << "";
      else if(j%2 ==0)cout << "_";
      else cout << "__";
    }
    cout << endl;
  }
}

/*

*    *    *    *    *    *    _____________________________________________
   *    *    *    *    *
*    *    *    *    *    *    _____________________________________________
   *    *    *    *    *
*    *    *    *    *    *    _____________________________________________
   *    *    *    *    *
*    *    *    *    *    *    _____________________________________________
   *    *    *    *    *
*    *    *    *    *    *    _____________________________________________

___________________________________________________________________________

___________________________________________________________________________

___________________________________________________________________________

___________________________________________________________________________

___________________________________________________________________________

*/
