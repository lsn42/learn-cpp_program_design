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
    cout << "构造成功" << endl;
  }

  CA(const CA& ca): a(ca.a)
  {
    this->str = new char[a];
    strcpy(this->str, ca.str);
    cout << "复制构造成功" << endl;
  };

  void Show()
  {
    cout << "构造的字符串为：" << str << endl;
    // cout<<"构造的字符串地址为："<<str<<endl;
    printf("构造的字符串地址为：%d\n", str);
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