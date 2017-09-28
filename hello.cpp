#include <iostream>
#include <array>
using namespace std;

//this is a comment that I am adding
int main() {
   cout << "Hello, world!" << endl;
   cout << "What is your name?" endl;
   string name;
   getline(cin,name);
   int size = name.size();
   return 0;
}
