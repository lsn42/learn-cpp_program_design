#include <iostream>
using namespace std;
class Ctyre
{
 private:
  int radius;
  int width;

 public:
  Ctyre(void) { cout << "Ctyre constructor~" << endl; }
  Ctyre(Ctyre& ctyre) { cout << "Ctyre copy constructor~" << endl; }
  ~Ctyre() { cout << "Ctyre destructor~" << endl; }
};
class Cengine
{
 public:
  Cengine() { cout << "Cengine constructor~" << endl; }
  ~Cengine() { cout << "Cengine destructor~" << endl; }
};
class Ccar
{
 private:
  Ctyre tyre;
  Cengine engine;

 public:
  Ccar() { cout << "Ccar constructor~" << endl; }
  // Ccar(Ccar& ccar) : engine(ccar.engine), tyre(ccar.tyre) {
  //   cout << "Ccar  copy constructor~" << endl;
  // }
  Ccar(Ccar& ccar) { cout << "Ccar  copy constructor~" << endl; }
  void show_1(const Ccar ccar);
  void show_2(const Ccar& ccar);
  ~Ccar() { cout << "Ccar destructor~" << endl; }
};
void Ccar::show_1(const Ccar ccar) { cout << "show ccar~" << endl; }
void Ccar::show_2(const Ccar& ccar) { cout << "show ccar~" << endl; }
int main()
{
  Ccar car_1;
  cout << endl;

  Ccar car_2(car_1);
  cout << endl;

  car_2.show_1(car_1);
  cout << endl;

  car_2.show_2(car_1);
  cout << endl;

  return 0;
}