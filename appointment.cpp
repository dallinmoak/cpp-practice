//#include "appointment.h"
#include <string>


using namespace std;

Appointment::Appointment(){
    isconflicted = false;
    timex = 0;
}

Appointment::Appointment(string n){
  isconflicted = false;
  timex = 0;
}

int getTime(){
  return timex;
}

string getName(){
  return name;
}

void setTime(int t){
  timex = t;
}

void setName(string n){
  name = n;
}
