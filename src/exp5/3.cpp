#include <iostream>
using namespace std;

class Engine
{
 public:
  virtual void start();
};

void Engine::start() { cout << "starting Engine\n"; }

class FordTaurus //请定义FordTaurus类
{
 public:
  Engine engine;
  void start();
};
void FordTaurus::start() //请完善函数功能
{
  cout << "starting FordTaurus\n";
  this->engine.start();
}

int main()
{
  FordTaurus taurus;
  taurus.start();
  return 0;
}