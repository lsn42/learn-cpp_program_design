#include <iostream>

using namespace std;

class Test
{
private:
    int x;
public:
    Test(int x)
    {
        this->x = x;
        cout << x <<" parameter constructed" << endl;}

    Test()
    {
        x = 0;
        cout << x <<" default constructed" << endl;
    }

    Test(Test& t)
    {
        x = 0;
        cout << x <<" copy constructed" << endl;
    }
   Test(const Test& t)
    {
        x = 1;
        cout << x <<" const copy constructed" << endl;
    }
    void init(int x)
    {
        this->x = x;
        cout << x <<" init constructed" << endl;
    }
    ~Test()
    {
        cout << x <<" destroied" << endl;
    }
    int GetX()
    {
        return x;
    }

    void fun(Test t);

    Test add(Test t);

    Test add1(Test t) ;
};

void Test::fun(Test t)
{
     cout << t.x <<" excuted" << endl;

}

Test Test::add(Test t)
{
    x=t.x+20;
    cout << x <<" excuted" << endl;
    return t;
}

Test Test::add1(Test t)
{
    x=t.x+40;
    cout << x <<" excuted" << endl;
    return t;
}
Test t1;
int main()
{
    Test a(10);
    Test b(a);
    a.fun(a);
    b.add(b);
    cout << endl<< endl;
    Test c=b.add1(a);
}