#include <iostream>
using namespace std;
class Vehicle   //�����ඨ�����Ӧ����
{
public:
  Vehicle() = default;
  Vehicle(int weight): weight(weight)
  {
    cout<<"Vehicle�������ɹ���"<<endl;
  }
  void SetWeight(int weight)
  {
    this->weight = weight;
    cout<<"����������"<<endl;
  }
  void ShowMe();
protected:
  int weight;
};

class Car: virtual public Vehicle   //�����ඨ�����Ӧ����
{
public:
  Car(int weight, int aird): aird(aird)
  {
    cout<<"Car�������ɹ���"<<endl;
  }
  void ShowMe()
  {
    cout<<"I'm car��"<<endl;
  }
protected:
  int aird;
};

class Boat: virtual public Vehicle   //�����ඨ�����Ӧ����
{
public:
  Boat(int weight, float tonnage): tonnage(tonnage)
  {
    cout<<"Boat�������ɹ���"<<endl;
  }
  void ShowMe()
  {
    cout<<"I'm boat��"<<endl;
  }
protected:
  float tonnage;
};

class AmphibianCar: virtual public Car, virtual public Boat   //�����ඨ�����Ӧ����
{
public:
  AmphibianCar(int weight, float aird, float tonnage): Vehicle(weight), Car(weight, aird), Boat(weight, tonnage)
  {
    cout<<"����AmphibianCar�������ɹ���"<<endl;
  }
  void ShowMe()
  {
    cout<<"I��m amphibianCar��"<<endl;
  }
  void ShowMembers()
  {
    cout<<"������"<<weight<<"�٣�"<<"����������"<<aird<<"CC��"<<"��ˮ����"<<tonnage<<"��"<<endl;
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