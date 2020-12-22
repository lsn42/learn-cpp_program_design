#include <iostream>
using namespace std;

class A //基类A
{
 public:
  int dataA;
};

class B: virtual public A
{
 public:
  int dataB;
};

class C: virtual public A
{
 public:
  int dataC;
};

class D: public B, public C
{
 public:
  int dataD;
};
//编写测试主函数，测试各个类的内存分配情况
int main()
{
  D *d = new D;
  d->dataA = 10;
  d->dataB = 100;
  d->dataC = 1000;
  d->dataD = 10000;

  B *b = d;
  C *c = d;
  A *fromB = (B *)d;
  A *fromC = (C *)d;

  cout << "d: " << (int *)d << endl;
  cout << "b: " << (int *)b << endl;
  cout << "c: " << (int *)c << endl;
  cout << "fromB: " << (int *)fromB << endl;
  cout << "fromC: " << (int *)fromC << endl;
  cout << "&(d->dataA): " << (int *)&(d->dataA) << endl;
  cout << "&(d->dataB): " << (int *)&(d->dataB) << endl;
  cout << "&(d->dataC): " << (int *)&(d->dataC) << endl;
  cout << "&(d->dataD): " << (int *)&(d->dataD) << endl;

  cout << endl;

  cout << "sizeof(A): " << sizeof(A) << endl;
  cout << "sizeof(B): " << sizeof(B) << endl;
  cout << "sizeof(C): " << sizeof(C) << endl;
  cout << "sizeof(D): " << sizeof(D) << endl;
  return 0;
}