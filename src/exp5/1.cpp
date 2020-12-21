#include <iostream>
using namespace std;
class Vehicle   //补充类定义的相应代码
{
public:
  Vehicle() = default;
  Vehicle(int weight): weight(weight)
  {
    cout<<"Vehicle类对象构造成功！"<<endl;
  }
  void SetWeight(int weight)
  {
    this->weight = weight;
    cout<<"重置重量："<<endl;
  }
  void ShowMe();
protected:
  int weight;
};

class Car: virtual public Vehicle   //补充类定义的相应代码
{
public:
  Car(int weight, int aird): aird(aird)
  {
    cout<<"Car类对象构造成功！"<<endl;
  }
  void ShowMe()
  {
    cout<<"I'm car！"<<endl;
  }
protected:
  int aird;
};

class Boat: virtual public Vehicle   //补充类定义的相应代码
{
public:
  Boat(int weight, float tonnage): tonnage(tonnage)
  {
    cout<<"Boat类对象构造成功！"<<endl;
  }
  void ShowMe()
  {
    cout<<"I'm boat！"<<endl;
  }
protected:
  float tonnage;
};

class AmphibianCar: virtual public Car, virtual public Boat   //补充类定义的相应代码
{
public:
  AmphibianCar(int weight, float aird, float tonnage): Vehicle(weight), Car(weight, aird), Boat(weight, tonnage)
  {
    cout<<"载入AmphibianCar类对象构造成功！"<<endl;
  }
  void ShowMe()
  {
    cout<<"I‘m amphibianCar！"<<endl;
  }
  void ShowMembers()
  {
    cout<<"重量："<<weight<<"顿，"<<"空气排量："<<aird<<"CC，"<<"排水量："<<tonnage<<"顿"<<endl;
  }
};

int main()
{
  AmphibianCar a(4,200,1.35f);
  a.ShowMe();
  a.ShowMembers();
  a.SetWeight(3);
  a.ShowMembers();
}