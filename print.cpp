#include <iostream>

using namespace std;

void printSquare(int side, int unit);

int main(){
  cout << "how many squares? ";
  int side;
  cin >> side;
  cout << "unit? ";
  int unit;
  cin >> unit;
  printSquare(side, unit);
  return 0;
}

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
