#include <iostream>

using namespace std;

class B;

class A
{
public:
    A()
    {
        cout << "b1����ɹ�" << endl;
    }
private:
    B *b1;
};
class B
{
public:
    B()
    {
        cout << "a1����ɹ�" << endl;
    }
private:
    A *a1;
};
int main()
{
    A a = A();
    B b;
}