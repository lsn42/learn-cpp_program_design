#include <cstring>
#include <iostream>

using namespace std;
class CA
{
 public:
  CA(int b, char* cstr)
  {
    a = b;
    str = new char[b];
    strcpy(str, cstr);
    cout << "����ɹ�" << endl;
  }

  CA(const CA& ca): a(ca.a)
  {
    this->str = new char[a];
    strcpy(this->str, ca.str);
    cout << "���ƹ���ɹ�" << endl;
  };

  void Show()
  {
    cout << "������ַ���Ϊ��" << str << endl;
    // cout<<"������ַ�����ַΪ��"<<str<<endl;
    printf("������ַ�����ַΪ��%d\n", str);
  }
  ~CA() { delete str; }

 private:
  int a;
  char* str;
};
int main()
{
  CA A(10, "Hello!");
  A.Show();
  CA B = A;
  B.Show();
  return 0;
}