#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <string>
#include <ctime>


using namespace std;

class Appointment{
public:
  Appointment();
  Appointment(string n);
  time_t getTime() const;
  string getName() const;
  void setTime(time_t t);
  void setName(string n);
private:
  string name;
  time_t timex;
  bool isconflicted;
};

#endif
