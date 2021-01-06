#include <iostream>
using namespace std;
class Person
{
  friend class Teacher; // 添加派生类Teacher作为友元
  friend void test();   // 添加友元函数test

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
class Teacher: public Person
{
  friend void test(); // 添加友元函数test

 public:
  Teacher(const string& id, const string& name, int age, const string& title):
    Person(id, name, age), m_title(title){};

  void ShowTeacherInfo()
  {
    cout << "工号：" << m_id << endl;
    cout << "姓名：" << m_name << endl;
    cout << "年龄：" << m_age << endl;
    // cout << "职称：" << m_title << endl;
  }

 private:
  string m_title; //职称
};

void test()
{
  Teacher teacher("P10001", "张立", 22, "助教");
  teacher.ShowTeacherInfo();
  cout << endl;
  cout << "工号：" << teacher.m_id << endl;   //
  cout << "姓名：" << teacher.m_name << endl; //
  teacher.m_age;
  cout << "职称：" << teacher.m_title << endl; // 输出
}

int main()
{
  test();
}