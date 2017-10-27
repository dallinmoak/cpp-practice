#include "appointment.h"
#include <string>
#include <ctime>

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

time_t Appointment::getTime() const{
  return timex;
}

string Appointment::getName() const{
  return name;
}

void Appointment::setTime(time_t t){
  timex = t;
}

void Appointment::setName(string n){
  name = n;
}
