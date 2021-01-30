#include <iostream>

using namespace std;

class Base1
{
 public:
  virtual void f() { cout << "Base1::f" << endl; }

  virtual void g() { cout << "Base1::g" << endl; }

  virtual void h() { cout << "Base1::h" << endl; }
};

class Base2
{
 public:
  virtual void f() { cout << "Base2::f" << endl; }

  virtual void g() { cout << "Base2::g" << endl; }

  virtual void h() { cout << "Base2::h" << endl; }
};

class Base3
{
 public:
  virtual void f() { cout << "Base3::f" << endl; }

  virtual void g() { cout << "Base3::g" << endl; }

  virtual void h() { cout << "Base3::h" << endl; }
};

class Derive: public Base1, public Base2, public Base3
{
 public:
  virtual void f() { cout << "Derive::f" << endl; }

  virtual void g1() { cout << "Derive::g1" << endl; }
};

typedef void (*Fun)(void);

int main()
// 测试利用虚函数表，实现虚函数的多态性。
{
  Derive d;
  Base1* b1 = &d;
  b1->f();
  Base2* b2 = &d;
  b2->f();
  Base3* b3 = &d;
  b3->f();
  return 0;
}