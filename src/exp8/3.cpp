#include <iomanip>
#include <iostream>

#include "array.h"

using namespace std;

int main()
{
  int n;
  double average, total = 0;
  cout << "������ѧ��������";
  cin >> n;
  Array<float> score(n);
  for (int i = 0; i < n; i++)
  {
    cout << "�������" << i + 1 << "��ѧ���Ŀγ�A�ɼ�(0~100)��";
    cin >> score[i];
    total += score[i];
  }
  average = total / n;
  cout << "ƽ���ɼ�Ϊ" << setprecision(4) << average << endl;

  cout << (float*)score << endl;
  cout << *(float*)score << endl;
  cout << score[0] << endl;
  cout << score[1] << endl;
  return 0;
}