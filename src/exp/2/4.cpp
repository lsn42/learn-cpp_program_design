#include <iostream>

using namespace std;

class Circle
{
 public:
  Circle(double radius) { this->radius = radius; }
  Circle() {}
  double getArea();
  friend double calArea(Circle c);

 private:
  double radius;
};
double Circle::getArea() { return 3.14 * this->radius * this->radius; }
double calArea(Circle c) { return 3.14 * c.radius * c.radius; }
int main()
{
  Circle c(5);
  cout << "getArea: " << c.getArea() << endl;
  cout << "calArea: " << calArea(c);
}