#include <iostream>
using namespace std;
class Shape
{
 public:
  Shape() {}
  ~Shape() {}
  virtual float getArea() { return -1; }
};
//定义Circle类
class Circle: public Shape
{
 public:
  Circle(float radius): radius(radius){};
  float radius;
  float getArea() { return radius * radius * 3.14; }
};
//定义Rectangle类
class Rectangle: public Shape
{
 public:
  Rectangle(float width, float height): width(width), height(height){};
  float width, height;
  float getArea() { return width * height; }
};
//定义Aquare类
class Square: public Rectangle
{
 public:
  Square(float size): Rectangle(size, size){};
};
int main()
{
  Shape* sp;
  sp = new Circle(5);
  cout << "The area of the Circle is " << sp->getArea() << endl;
  delete sp;
  sp = new Rectangle(4, 6);
  cout << "The area of the Rectangle is " << sp->getArea() << endl;
  delete sp;
  sp = new Square(5);
  cout << "The area of the Square is " << sp->getArea() << endl;
  delete sp;
  return 0;
}