#include <iostream>
#include <cmath>

using namespace std;

//class def: Point
class Point{
public:
  void setPoints(double xval, double yval);
  double getX();
  double getY();
private:
  double x;
  double y;
};
//Point functions
void Point::setPoints(double xval, double yval){
  x = xval;
  y = yval;
}

double Point::getX(){
  return x;
}

double Point::getY(){
  return y;
}

double distanceBetween(Point p1, Point p2);

int main(){
  double x1;
  double y1;
  double x2;
  double y2;
  cout << "enter x1 and y1: ";
  cin >> x1 >> y1;
  cout << "enter x2 and y2: ";
  cin >> x2 >> y2;
  Point p1;
  p1.setPoints(x1,y1);
  Point p2;
  p2.setPoints(x2,y2);
  cout << "p1: (" << p1.getX() << "," << p1.getY() << ")\n";
  cout << "p2: (" << p2.getX() << "," << p2.getY() << ")\n";
  cout << "the distance between p1 and p2 is "
       << distanceBetween(p1,p2) << "\n";
}

//calculates the distance b
double distanceBetween(Point p1, Point p2){
  double square = pow(p1.getX()-p2.getX(),2)+pow(p1.getY()-p2.getY(),2);
  return sqrt(square);
}
