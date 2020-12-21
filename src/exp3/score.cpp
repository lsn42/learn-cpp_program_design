#include <iostream>
#include <vector>
#include "score.hpp"

using namespace std;

score::score(): number("0"), name("null"), pinshi_score(0), final_score(0)
{
  this->count();
};

score::score(std::string number, std::string name, double pinshi_score, double final_score):
  number(number),
  name(name),
  pinshi_score(pinshi_score),
  final_score(final_score)
{
  this->count();
};

void score::count()
{
  this->zonpin_score = pinshi_score*0.4+final_score*0.6;
}

void score::ShowScore()
{
  std::cout << this->number << " " << this->name << " " << this->pinshi_score << " " << this->final_score << " " << this->zonpin_score << endl;
}