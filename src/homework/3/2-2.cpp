#include <iostream>
using namespace std;
class B;
class B
{
 private:
  int m_n;

 public:
  B(int n = 100): m_n(n) { cout << "B()" << endl; }
  ~B() { cout << "~B()" << endl; }
  void dothing() { cout << "B::anythig()" << endl; }
};
class A
{
 private:
  int m_nInt;
  int& m_nRInt;
  int* m_pInt;

  B b;
  B* m_pB;
  B& m_b;

 public:
  A(B* pBPara = NULL):
    m_nInt(100),
    m_nRInt(m_nInt),
    m_pInt(NULL),
    m_pB(NULL),
    m_b((NULL == pBPara) ? (*m_pB) : (*pBPara))
  {
    cout << "A()" << endl;
  }
  ~A() { cout << "~A()" << endl; }

  void funA() { m_pB->dothing(); }
};

int main()
{
  A objA;
  system("pause");
}