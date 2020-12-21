#include <iostream>
using namespace std;

class smallone
{
public:
    smallone(int sma) 
    {
        x=sma;
        cout<<"sm constr:"<<sma<<"\n";
    }

    int getX()
    {
        return x;
    }
    ~smallone()
    {
        cout<<"调用了析构函数释放对象！\n";
    } 
private:
    int x;
};
void fn(int n) 
{  
    static smallone sm(n);
    cout<<"in function fn with n="<<n<<"  sm.x="<<sm.getX()<<endl;
}
int main()    
{  
    fn(10);       
    fn(20); 
    return 0;
}