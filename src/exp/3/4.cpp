#include <iostream>
#include <vector>

#include "score.hpp"

using namespace std;

int main()
{
  vector<score> a;
  a.resize(3);
  const vector<score> b = {score("201701101", "Li Hongmei", 90, 80),
    score("201701102", "Li Hong", 80, 70),
    score("201701103", "Li Mei", 70, 60)};
  for (score s : a)
  {
    s.ShowScore();
  }
  cout << endl;
  for (score s : b)
  {
    s.ShowScore();
  }
}