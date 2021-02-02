#include <iostream>
using namespace std;
class Base
{
 public:
  virtual void f() { cout << "Base::f" << endl; }
  virtual void g() { cout << "Base::g" << endl; }
  virtual void h() { cout << "Base::h" << endl; }
};
typedef void (*Fun)(void); //定义一个函数指针类型Fun
int main()
{
  Base b;
  Fun pFun = NULL;
  cout << "虚函数表地址：" << (int *)(*(int *)(&b)) << endl << endl;
  cout << "虚表指针vptr[0]的地址：" << (int *)(*(int *)(&b)) << endl;
  cout << "虚表指针vptr[1]的地址：" << (int *)((int *)(*(int *)(&b)) + 1)
       << endl;
  cout << "虚表指针vptr[2]的地址：" << (int *)((int *)(*(int *)(&b)) + 2)
       << endl
       << endl;

  cout << "虚函数表 — 第1个函数f()地址：" << (int *)(*(int *)*(int *)(&b))
       << endl;
  cout << "虚函数表 — 第2个函数g()地址：" << (int *)(*((int *)*(int *)(&b) + 1))
       << endl;
  cout << "虚函数表 — 第3个函数h()地址：" << (int *)(*((int *)*(int *)(&b) + 2))
       << endl
       << endl;

  //也可以用给函数指针赋值的方法
  pFun = (Fun)(int *)(*(int *)*(int *)(&b));
  cout << "虚函数表 — 第1个函数f()地址：" << (int *)pFun << endl;
  pFun();
  pFun = (Fun)(int *)(*((int *)*(int *)(&b) + 1));
  cout << "虚函数表 — 第2个函数g()地址：" << (int *)pFun << endl;
  pFun();
  pFun = (Fun)(int *)(*((int *)*(int *)(&b) + 2));
  cout << "虚函数表 — 第3个函数h()地址：" << (int *)pFun << endl;
  pFun();
}