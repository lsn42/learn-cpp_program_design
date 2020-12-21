#include <iostream>

using namespace std;

class B;

class A
{
public:
    A()
    {
        cout << "b1构造成功" << endl;
    }
private:
    B *b1;
};
class B
{
public:
    B()
    {
        cout << "a1构造成功" << endl;
    }
private:
    A *a1;
};
int main()
{
    A a = A();
    B b;
}