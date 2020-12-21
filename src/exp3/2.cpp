#include <iostream>

using namespace std;

class score
{
public:
  score(): number("0"), name("null"), pinshi_score(0), final_score(0)
  {
    this->count();
  };
  score(string number, string name, double pinshi_score, double final_score):
    number(number),
    name(name),
    pinshi_score(pinshi_score),
    final_score(final_score)
  {
    this->count();
  };
  void count()
  {
    this->zonpin_score = pinshi_score*0.4+final_score*0.6;
  }
  void ShowScore()
  {
    std::cout << this->number << " " << this->name << " " << this->pinshi_score << " " << this->final_score << " " << this->zonpin_score << endl;
  }
private:
  string number;
  string name;
  double pinshi_score;
  double final_score;
  double zonpin_score;
};

int main()
{
  score a[3];
  const score b[3] =
  {
    score("201701101", "Li Hongmei", 90, 80),
    score("201701102", "Li Hong", 80, 70),
    score("201701103", "Li Mei", 70, 60)
  };
  for (score s: a)
  {
    s.ShowScore();
  }
  cout << endl;
  for (score s: b)
  {
    s.ShowScore();
  }
}