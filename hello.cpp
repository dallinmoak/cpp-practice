#include <iostream>
#include <array>
using namespace std;

string goodbyemsg();

//this is a comment that I am adding
int main() {
<<<<<<< HEAD
   cout << "Hello, world!\n\n";
   cout << "What is your name? ";
   string name;
   getline(cin,name);
   int namesize = name.size();
   cout << "I see you have " << namesize << "* characters in your name.\n"
    << "*including whitespace\n\n";
   cout << goodbyemsg();
   return 0;
}

string goodbyemsg(){
  return "this is all...\n\n\n\n...goodbye now...\n";
}
