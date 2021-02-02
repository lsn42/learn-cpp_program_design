#include <cstring>
class Person
{
 public:
  Person(char *xname, int xage, int xsalary, char *xtel);
  void disp();

 private:
  char name[10];
  int age;
  int salary;
  char tel[8];
};
Person::Person(char *xname, int xage, int xsalary, char *xtel)
{
  memcpy(this->name, xname, 10);
  this->age = xage;
  this->salary = xsalary;
  memcpy(this->tel, xtel, 8);
}
int main()
{
  Person p("Alice", 20, 2147483647, "12345678");
}