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
};

Test t1;
int main()
{
    Test a(10);
    Test b;

    b.init(10);

    Test arr[3] = {Test(10),Test(),Test()};
    Test brr[3];

    cout<<brr[0].GetX()<<endl;
    brr[0].init(10);
    cout<<brr[0].GetX()<<endl;

    return 0;
}