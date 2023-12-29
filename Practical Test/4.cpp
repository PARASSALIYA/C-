#include <iostream>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "ABC " << endl;
    }
};
class B : public A
{
public:
    void print()
    {
        cout << "DEF " << endl;
    }
};
class C : public A
{
public:
    void print()
    {
        cout << "GHI " << endl;
    }
};
class D : public B, public C
{
public:
    void print()
    {
        cout << "JKL " << endl;
    }
};
int main()
{
    B b1;
    b1.A::print();
    b1.print();
    D d1;
    d1.C::print();
    d1.print();
}