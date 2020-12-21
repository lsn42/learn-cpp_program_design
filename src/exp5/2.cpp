#include <iostream>
#include <cstring>
using namespace std;
class Teacher                                //教师类
{
public:
  Teacher(int, char[], char);               //声明构造函数
  void display();                          //声明输出函数
private:
  int num;
  char name[20];
  char sex;
};

Teacher::Teacher(int num, char name[], char sex): num(num), sex(sex)    //请给出Teacher类的构造函数
{
  strcpy(this->name, name);
}

void Teacher::display()                      //输出函数
{
  cout<<"num:"<<num<<endl;
  cout<<"name:"<<name<<endl;
  cout<<"sex:"<<sex<<endl;
}

class BirthDate                               //生日类
{
public:
  BirthDate(int, int, int);                   //声明构造函数
  void display();                           //声明输出函数
  void change(int, int, int);                 //声明修改函数
private:
  int year;
  int month;
  int day;
};

BirthDate::BirthDate(int year, int month, int day): year(year), month(month), day(day) {};       //请给出BirthDate类的构造函数

void BirthDate::display()                     //定义输出函数
{
  cout<<"birthday:"<<month<<"/"<<day<<"/"<<year<<endl;
}

void BirthDate::change(int y, int m, int d)     //定义修改函数
{
  year=y;
  month=m;
  day=d;
}

class Professor: virtual public Teacher            //请定义教授类
{
public:
  Professor(int, char[], char, int, int, int, float);               //声明构造函数
  void display();                          //声明输出函数
  void change(int, int, int);                 //声明修改函数
  BirthDate birthday;
  float area;
};
Professor::Professor(int num, char name[], char sex, int year, int month, int day, float area): Teacher(num, name, sex), birthday(year, month, day), area(area) {};
void Professor::display()                      //定义输出函数
{
  Teacher::display();
  birthday.display();
  cout<<"area:"<<area<<endl;
}
void Professor::change(int y, int m, int d)     //定义修改函数
{
  birthday.change(y, m, d);
}

int main()
{
  Professor prof1(3012,"Zhang",'f',1949,10,1,125.4);   cout<<endl<<"original data:"<<endl;
  prof1.display();              
  cout<<endl<<"new data:"<<endl;
  prof1.change(1950,6,1);    
  prof1.display();       
  return 0;
}