#include <iostream>

using namespace std;

class Point
{
 public:
  Point();
  Point(int x, int y);
  Point(Point &p);
  void Print();

 private:
  int x, y;
};
Point::Point()
{
  this->x = 0;
  this->y = 0;
  cout << "no arguement constrcutor" << endl;
}
Point::Point(int x, int y)
{
  this->x = x;
  this->y = y;
  cout << "common constrcutor" << endl;
}
Point::Point(Point &p)
{
  this->x = p.x;
  this->y = p.y;
  cout << "copy constrcutor" << endl;
}
void Point::Print() { cout << "(" << this->x << ", " << this->y << ")"; }

int main()
{
  Point p1;
  Point p2(3, 4);
  Point p3(p2);
  p3.Print();
}