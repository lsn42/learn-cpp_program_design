#include <cmath>
#include <iostream>

using namespace std;

class Point
{
 public:
  Point(int x, int y): x(x), y(y){};
  int getX() const { return this->x; }
  int getY() const { return this->y; }
  double Dist(Point p)
  {
    return sqrt((this->getX() - p.getX()) * (this->getX() - p.getX()) +
      ((this->getY() - p.getY()) * (this->getY() - p.getY())));
  }
  double Dist(const Point p) const
  {
    return sqrt((this->getX() - p.getX()) * (this->getX() - p.getX()) +
      ((this->getY() - p.getY()) * (this->getY() - p.getY())));
  }

 private:
  int x, y;
};

int main()
{
  const int x1 = 2, y1 = 2, x2 = 3, y2 = 3;
  Point myp1(1, 1), myp2(4, 5);
  const Point p1(x1, y1), p2(x2, y2);

  cout << "myp1.Dist(myp2): " << myp1.Dist(myp2) << endl;
  cout << "myp1.Dist(p1): " << myp1.Dist(p1) << endl;
  cout << "myp1.Dist(p2): " << myp1.Dist(p2) << endl;
  cout << endl;
  cout << "myp2.Dist(myp1): " << myp2.Dist(myp1) << endl;
  cout << "myp2.Dist(p1): " << myp2.Dist(p1) << endl;
  cout << "myp2.Dist(p2): " << myp2.Dist(p2) << endl;
  cout << endl;
  cout << "p1.Dist(myp1): " << p1.Dist(myp1) << endl;
  cout << "p1.Dist(myp2): " << p1.Dist(myp2) << endl;
  cout << "p1.Dist(p2): " << p1.Dist(p2) << endl;
  cout << endl;
  cout << "p2.Dist(myp1): " << p2.Dist(myp1) << endl;
  cout << "p2.Dist(myp2): " << p2.Dist(myp2) << endl;
  cout << "p2.Dist(p1): " << p2.Dist(p1) << endl;
}