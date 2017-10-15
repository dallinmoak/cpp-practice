#include "appointment.h"
#include <string>


using namespace std;

Appointment::Appointment(){
    isconflicted = false;
    timex = 0;
    name = "";
}

Appointment::Appointment(string n){
  isconflicted = false;
  timex = 0;
  name = n;

}

int getTime() const{
  return timex;
}

string getName()const{
  return name;
}

void setTime(int t){
  timex = t;
}

void setName(string n){
  name = n;
}
