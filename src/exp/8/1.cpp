#include <iostream>
using namespace std;
template<typename T1, typename T2, typename T3>
T1 add(T2 a, T3 b)
{
  T1 sum;
  sum = static_cast<T1>(a + b);
  return sum;
}

int main()
{
  int x = 12;
  float y = 46.9;
  cout << add<float>(x, y) << endl;
  cout << add<int, int, float>(x, y) << endl;
  return 0;
}