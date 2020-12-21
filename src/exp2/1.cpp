#include <iostream>
#include <cmath>
using namespace std;
class Point
{
public:
    Point(int xx,int yy)   { X=xx; Y=yy; } //���캯��
    Point() {}
    Point(Point &p);
    int GetX(void)     { return X; } //ȡX����
    int GetY(void)     { return Y; } //ȡY����
private:
    int X,Y; //�������
};
Point::Point(Point &p)
{
    X = p.X;
    Y = p.Y;
    cout << "Point�������캯��������" << endl;
}
class Distance  //������Ķ���
{
public:
    double GetDis() {return dist;}
    Distance(Point p1, Point p2);
private:
    Point p1, p2;
    double dist;
};
Distance::Distance(Point p1, Point p2) {
    this->p1 = p1;
    this->p2 = p2;
    this->dist = sqrt((p1.GetX()-p2.GetX())*(p1.GetX()-p2.GetX())+((p1.GetY()-p2.GetY())*(p1.GetY()-p2.GetY())));
} // ���������Ĺ��캯��
int main()
{
    Point myp1(1,1), myp2(4,5);
    Distance myd(myp1, myp2);
    cout << "The distance is:";
    cout << myd.GetDis();
 //���������������
    return 0;
}