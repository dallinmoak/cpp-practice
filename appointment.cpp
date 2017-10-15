#include "appointment.h"
#include <string>


using namespace std;

Appointment::Appointment(){
    isconflicted = false;
    timex = 0;
    name = "";
}

Appointment::Appointment(string n){
  name = n;
  isconflicted = false;
  timex = 0;
  name = n;

}

int Appointment::getTime() const{
  return timex;
}

string Appointment::getName() const{
  return name;
}

void Appointment::setTime(int t){
  timex = t;
}

void Appointment::setName(string n){
  name = n;
}
