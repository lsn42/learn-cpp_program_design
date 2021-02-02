class Stu
{
 private:
  int num;
  const float score = 1;

 public:
  Stu(int a, float b): num(a), score(b){};
  Stu(int a): num(a){};
  Stu(){};
};
int main()
{
  Stu stu1(3, 5.0);
  Stu stu2(4);
  Stu const stu3;
  return 0;
}