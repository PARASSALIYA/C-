#include <iostream>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "HELLO";
    }
};
class B : public A
{
public:
    void print()
    {
        cout << "WORLD";
    }
};

int main()
{
    B b1;
    b1.print();
}
