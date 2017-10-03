#include <iostream>
#include <string>

using namespace std;

void printStars(int row, int col);
string topStripes(int r);
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
    if (i%2 ==0) cout << "*\n"<< topStripes(row);
    else cout << endl;
  }
}

string topStripes(int r){
  char str[] = "";
  for (int i = 0;i<(3*r);i++){
    strcat (str, "____");
  }
  return str;
}

void printStripes(int row, int col){
  for (int i = 0; i < row; i++){
    for (int j=0; j < (3*col); j++){
      cout << "____";
    }
    cout << endl;
  }
}
