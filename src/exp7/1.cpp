#include <iostream>
using namespace std;
class Base
{
 public:
  virtual void f() { cout << "Base::f" << endl; }
  virtual void g() { cout << "Base::g" << endl; }
  virtual void h() { cout << "Base::h" << endl; }
};
typedef void (*Fun)(void); //����һ������ָ������Fun
int main()
{
  Base b;
  Fun pFun = NULL;
  cout << "�麯�����ַ��" << (int *)(*(int *)(&b)) << endl << endl;
  cout << "���ָ��vptr[0]�ĵ�ַ��" << (int *)(*(int *)(&b)) << endl;
  cout << "���ָ��vptr[1]�ĵ�ַ��" << (int *)((int *)(*(int *)(&b)) + 1)
       << endl;
  cout << "���ָ��vptr[2]�ĵ�ַ��" << (int *)((int *)(*(int *)(&b)) + 2)
       << endl
       << endl;

  cout << "�麯���� �� ��1������f()��ַ��" << (int *)(*(int *)*(int *)(&b))
       << endl;
  cout << "�麯���� �� ��2������g()��ַ��" << (int *)(*((int *)*(int *)(&b) + 1))
       << endl;
  cout << "�麯���� �� ��3������h()��ַ��" << (int *)(*((int *)*(int *)(&b) + 2))
       << endl
       << endl;

  //Ҳ�����ø�����ָ�븳ֵ�ķ���
  pFun = (Fun)(int *)(*(int *)*(int *)(&b));
  cout << "�麯���� �� ��1������f()��ַ��" << (int *)pFun << endl;
  pFun();
  pFun = (Fun)(int *)(*((int *)*(int *)(&b) + 1));
  cout << "�麯���� �� ��2������g()��ַ��" << (int *)pFun << endl;
  pFun();
  pFun = (Fun)(int *)(*((int *)*(int *)(&b) + 2));
  cout << "�麯���� �� ��3������h()��ַ��" << (int *)pFun << endl;
  pFun();
}