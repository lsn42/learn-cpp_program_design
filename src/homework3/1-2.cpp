#include <iostream>
using namespace std;
class CTyre
{
 private:
  int radius;
  int width;

 public:
  CTyre()
  {
    cout << "CTyre:No parameter construction." << endl;
  } // CTyre需要一个无参构造函数
  CTyre(int r, int w): radius(r), width(w)
  {
    cout << "radius: " << radius << endl;
    cout << "width: " << width << endl;
  }
};
class CEngine
{
};
class CCar
{
 private:
  int price;
  CTyre tyre;
  CEngine engine;

 public:
  CCar();
  CCar(int p, int tr, int tw);
};
CCar::CCar() { cout << "CCar:No parameter construction." << endl; }
CCar::CCar(int p, int tr, int tw): price(p), tyre(tr, tw)
{
  cout << "price: " << price << endl;
}; // 需要实现该方法
int main()
{
  CCar car_1;
  cout << endl << endl;
  CCar car_2(60000, 29, 266);
  return 0;
}