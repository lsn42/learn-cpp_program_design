#include <iostream>
using namespace std;
class A //父类A
{
 private:
  int a;

 public:
  A(int i): a(i){};
  void print() { cout << a << endl; }
};

class B //父类B
{
 private:
  int b;

 public:
  B(int j): b(j){};
  void print() { cout << b << endl; }
};

class C: public A, public B //子类C继承自A,B类
{
 private:
  int c;

 public:
  C(int i, int j, int k): A(i), B(j), c(k) {}
  void get_ab()
  {
    A::print();
    B::print();
  }
};

int main()
{
  C x(5, 8, 10);
  x.get_ab();
  x.A::print(); //希望输出A的成员a
  return 0;
}