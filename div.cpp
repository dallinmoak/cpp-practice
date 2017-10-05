#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void printbSize(int nBlocks);
void printRows(int num, bool first);

stringstream ss;

int main(){
  int num;
  cout << "num? ";
  cin >> num;
  printbSize(num);
  cout << ss.str();
  return 0;
}

void printbSize(int nBlocks){
  int max =20;
  int rows = nBlocks/max;
  int remain= nBlocks%max;
  for (int rowCount = 0; rowCount < rows; rowCount++){
    if (rowCount==0){
      printRows(max,true);
    }
    else printRows(max,false);
  }
  if (remain >0) printRows(remain,false);
}

void printRows(int num, bool first){
  int bSize=2;
  if (first){
    for (int i=0; i < num*bSize; i++){
      ss << " _";
    }
    ss << endl;
  }

  for (int i=0; i < num*bSize; i++){
    if(i%bSize==0) ss << "| ";
    else ss << "  ";
  }
  ss << "|\n";
  int count =0;
  for (int i=0; i <(num*bSize); i++){
    if(i%bSize==0) ss << "|_";
    else ss << " _";
    count++;
  }
  ss << "|\n";
}
