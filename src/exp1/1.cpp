#include <iostream>
using namespace std;
class CPoint
{
public:
    void Set(int x,int y);
    void Print();
private:
    int x;
    int y;
};
void CPoint::Set(int a,int b)
{
    x = a;
    y = b;
}
void CPoint::Print()
{
    cout<<"x="<<x<<",y="<<y<<endl;
}
int main()
{
    CPoint pt;	
    pt.Set(10,20);
    pt.Print();
}