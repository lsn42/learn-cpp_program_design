#include <iostream>
#include <string>

using namespace std;

class Person
{
  friend void test(Person& person); // ��test������ΪPerson�����Ԫ����

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

void test(Person& person) // ���person�����ò���
{
  cout << "���ţ�" << person.m_id << endl;   //
  cout << "������" << person.m_name << endl; //
  cout << "���䣺" << person.m_age << endl;  // �����ʾ����
}
int main()
{
  Person person("P10001", "����", 20); // ����Person����
  test(person);                        // �������
  cout << endl;                        //
  cout << person.m_id << endl;         // ��Ӵ�ӡ����
  return 0;
}