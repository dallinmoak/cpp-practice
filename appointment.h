#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <string>

using namespace std;

class Appointment{
public:
  Appointment();
  Appointment(string n);
  int getTime();
  string getName();
  void setTime(int t) const;
  void setName(string n) const;
private:
  string name;
  int timex;
  bool isconflicted;
};

#endif
