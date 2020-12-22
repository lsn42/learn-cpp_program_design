#include <cmath>
#include <iostream>

using namespace std;
class Point
{
 public:
  Point(int xx, int yy)
  {
    X = xx;
    Y = yy;
  } //���캯��
  Point() {}
  Point(Point &p);
  int GetX(void) { return X; } //ȡX����
  int GetY(void) { return Y; } //ȡY����
 private:
  int X, Y; //�������
};
Point::Point(Point &p)
{
  X = p.X;
  Y = p.Y;
}
class Rectangle
{
 public:
  Rectangle(Point p1, Point p2)
  {
    this->p1 = p1;
    this->p2 = p2;
    this->area = (p2.GetX() - p1.GetX()) * (p2.GetY() - p1.GetY());
    ++counter;
  }
  double get_area() { return this->area; }
  static int get_counter() { return counter; }

 private:
  Point p1, p2;
  double area;
  static int counter;
};
int Rectangle::counter = 0;
int main()
{
  Point p1(1, 2), p2(3, 4), p3(7, 8);
  Rectangle r1(p1, p2);
  cout << "r1�����" << r1.get_area() << endl;
  cout << "������" << Rectangle::get_counter() << endl;
  Rectangle r2(p2, p3);
  cout << "r1�����" << r2.get_area() << endl;
  cout << "������" << Rectangle::get_counter() << endl;
}