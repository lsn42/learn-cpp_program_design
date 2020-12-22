#include <iostream>
using namespace std;
class CPerson
{
 public:
  void Print();
  CPerson(int age, string name);

 private:
  CPerson();

 private:
  int age;
  char *name;
};
CPerson::CPerson() {}
CPerson::CPerson(int age, string name)
{
  this->age = age;
  this->name = (char *)(name.data());
}
void CPerson::Print() { cout << "name=" << name << ",age=" << age << endl; }
int main()
{
  CPerson ps(23, "张三");
  ps.Print();
  getchar();
}