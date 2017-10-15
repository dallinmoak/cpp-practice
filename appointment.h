#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <string>


using namespace std;

class Appointment{
public:
  Appointment();
  Appointment(string n);
<<<<<<< HEAD
  int getTime() const;
  string getName() const;
  void setTime(int t);
  void setName(string n);
=======
  int getTime();
  string getName();
  void setTime(int t) const;
  void setName(string n) const;
>>>>>>> 47fa5b6689ae9f737bfd27af7f0ac46d2025c7a2
private:
  string name;
  int timex;
  bool isconflicted;
};

#endif
