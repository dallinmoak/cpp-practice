#include <iostream>
#include <math.h>

using namespace std;

void printSquare(int side, int unit);

int main(){
  int side;
  int unit;
  /*cout << "I will print a square grid made of squares.\n";
  cout << "how many squares? ";
  cin >> side;
  cout << "how big do you want the squares? ";
  cin >> unit;
<<<<<<< HEAD
  printSquare(side, unit);*/
  int pwr;
  cout << "power? ";
  cin >> pwr;
  for (int i= 0; i <=pwr; i++){
    side = pow(2,i);
    unit = pow(2,pwr)/side;
    printSquare(side, unit);
  }
  cout << "\nPress any key, then RETURN to exit\n";
  int junk;
  cin >> junk;
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
