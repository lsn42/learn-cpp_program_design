#include <iostream>
using namespace std;
enum myColor
{
  BLACK,
  WHITE
};
class Mammal
{
 public:
  // constructors
  Mammal();
  ~Mammal();

  // accessors
  int getAge() const { return itsAge; }
  void setAge(int age) { itsAge = age; }
  int getWeight() const { return itsWeight; }
  void setWeight(int weight) { itsWeight = weight; }

  // Other methods
  void speak() const { cout << "Mammal sound!" << endl; }

 protected:
  int itsAge;
  int itsWeight;
};
class Dog: public Mammal
{
 public:
  Dog();
  ~Dog();
  myColor getColor() const { return itsColor; }
  void setColor(myColor color) { itsColor = color; }
  void wagTail() { cout << "Tail wagging..." << endl; }

 private:
  myColor itsColor;
};
//给出Mammal类构造函数的定义：Mammal::Mammal(){}
Mammal::Mammal() { cout << "Mammal constructor..." << endl; }
Mammal::~Mammal() { cout << "Mammal destructor..." << endl; }
//给出DOG类构造函数的定义：Dog::Dog(){}
Dog::Dog()
{
  setAge(1);
  cout << "Dog constructor..." << endl;
}
Dog::~Dog() { cout << "Dog destructor..." << endl; }
int main()
{
  Dog jack;
  jack.speak();
  jack.wagTail();
  cout << " jack is " << jack.getAge() << " years old" << endl;
  return 0;
}