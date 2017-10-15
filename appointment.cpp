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

<<<<<<< HEAD
int Appointment::getTime() const{
  return timex;
}

string Appointment::getName() const{
=======
int getTime() const{
  return timex;
}

string getName()const{
>>>>>>> 47fa5b6689ae9f737bfd27af7f0ac46d2025c7a2
  return name;
}

void Appointment::setTime(int t){
  timex = t;
}

void Appointment::setName(string n){
  name = n;
}
