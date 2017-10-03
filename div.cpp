#include <iostream>

using namespace std;

void printbSize(int nBlocks, int bSize);

int main(){
  int num;
  int size = 2;
  cout << "num? ";
  cin >> num;
  printbSize(num, size);
  return 0;
}

void printbSize(int nBlocks, int bSize){
  for (int blocks = 1; blocks <= nBlocks; blocks++){
    for (int i=0; i <(bSize-1); i ++){
      cout << " _";
    }
    cout << "|_";
  }
  cout << endl;
}

/*
 _ _ _ _ _ _
 _ _ _|_ _ _|
 */
