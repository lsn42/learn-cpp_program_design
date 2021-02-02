#include <iostream>
using namespace std;
class Person
{
  friend class Teacher; // ���������Teacher��Ϊ��Ԫ
  friend void test();   // �����Ԫ����test

 public:
  Person(const string& id, const string& name, int age):
    m_id(id), m_name(name), m_age(age){};

 public:
  string m_id; //����
 protected:
  string m_name; //����
 private:
  int m_age; //����
};
class Teacher: public Person
{
  friend void test(); // �����Ԫ����test

 public:
  Teacher(const string& id, const string& name, int age, const string& title):
    Person(id, name, age), m_title(title){};

  void ShowTeacherInfo()
  {
    cout << "���ţ�" << m_id << endl;
    cout << "������" << m_name << endl;
    cout << "���䣺" << m_age << endl;
    // cout << "ְ�ƣ�" << m_title << endl;
  }

 private:
  string m_title; //ְ��
};

void test()
{
  Teacher teacher("P10001", "����", 22, "����");
  teacher.ShowTeacherInfo();
  cout << endl;
  cout << "���ţ�" << teacher.m_id << endl;   //
  cout << "������" << teacher.m_name << endl; //
  teacher.m_age;
  cout << "ְ�ƣ�" << teacher.m_title << endl; // ���
}

int main()
{
  test();
}