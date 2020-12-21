#include <iostream>
#include <cmath>
using namespace std;
class Point
{
public:
    Point(int xx,int yy)   { X=xx; Y=yy; } //构造函数
    Point() {}
    Point(Point &p);
    int GetX(void)     { return X; } //取X坐标
    int GetY(void)     { return Y; } //取Y坐标
private:
    int X,Y; //点的坐标
};
Point::Point(Point &p)
{
    X = p.X;
    Y = p.Y;
    cout << "Point拷贝构造函数被调用" << endl;
}
class Distance  //补充类的定义
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
} // 补充组合类的构造函数
int main()
{
    Point myp1(1,1), myp2(4,5);
    Distance myd(myp1, myp2);
    cout << "The distance is:";
    cout << myd.GetDis();
 //补充输出两点间距离
    return 0;
}