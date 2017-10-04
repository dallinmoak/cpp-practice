#include <iostream>

using namespace std;

void printbSize(int nBlocks, int bSize);
void printRows(int num, int bSize);

int main(){
  int num;
  int size = 2;
  cout << "num? ";
  cin >> num;
  printbSize(num, size);
  return 0;
}

void printbSize(int nBlocks, int bSize){
  int max =20;
  int rows = nBlocks/max;
  int remain= nBlocks%max;
  for (int rowCount = 0; rowCount < rows; rowCount++){
    printRows(max,bSize);
  }
  printRows(remain,bSize);
}

void printRows(int num, int bSize){
  for (int i=0; i < num*bSize; i++){
    cout << " _";
  }
  cout << endl;
  for (int i=0; i < num*bSize; i++){
    if(i%bSize==0) cout << "| ";
    else cout << "  ";
  }
  cout << "|\n";
  for (int i=0; i < num*bSize; i++){
    if(i%bSize==0) cout << "|_";
    else cout << " _";
  }
  cout << "|\n";
}

/*
 _ _ _ _ _ _
 _ _ _|_ _ _|
 */
