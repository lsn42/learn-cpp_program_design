#include <string>
#ifndef SCORE_HPP
#define SCORE_HPP
class score
{
 public:
  score();
  score(std::string number, std::string name, double pinshi_score,
    double final_score);
  void count();
  void ShowScore();

 private:
  std::string number;
  std::string name;
  double pinshi_score;
  double final_score;
  double zonpin_score;
};
#endif