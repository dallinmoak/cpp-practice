#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <string>

using namespace std;

class Appointment{
public:
  Appointment();
  Appointment(string n);
  int getTime() const;
  string getName() const;
  void setTime(int t);
  void setName(string n);
private:
  string name;
  int timex;
  bool isconflicted;
};

#endif
