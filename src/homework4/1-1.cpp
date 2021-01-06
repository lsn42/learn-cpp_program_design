#include <iostream>
#include <string>

using namespace std;

class Person
{
  friend void test(Person& person); // 将test函数作为Person类的友元函数

 public:
  Person(const string& id, const string& name, int age):
    m_id(id), m_name(name), m_age(age){};

 public:
  string m_id; //工号
 protected:
  string m_name; //姓名
 private:
  int m_age; //年龄
};

void test(Person& person) // 添加person的引用参数
{
  cout << "工号：" << person.m_id << endl;   //
  cout << "姓名：" << person.m_name << endl; //
  cout << "年龄：" << person.m_age << endl;  // 添加提示内容
}
int main()
{
  Person person("P10001", "张立", 20); // 创建Person对象
  test(person);                        // 传入参数
  cout << endl;                        //
  cout << person.m_id << endl;         // 添加打印工号
  return 0;
}