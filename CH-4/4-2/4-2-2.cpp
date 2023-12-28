#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void sum1()
    {
        cout << "Enter A :";
        cin >> a;
    }
};
class B : public A
{
protected:
    int b;

public:
    void sum2()
    {
        cout << "Enter B :";
        cin >> b;
    }
};
class C : public A
{
protected:
    int c;

public:
    void sum3()
    {
        cout << "Enter C :";
        cin >> c;
    }
};
class D : public B, public C
{
protected:
    int d;

public:
    void sum4()
    {
        cout << "Enter D :";
        cin >> d;
    }
    void sum()
    {
        cout << "A + B + C + D :" << B::a + b + c + d;
    }
};

int main()
{
    B b1;
    C c1;
    D d1;
    b1.sum1();
    b1.sum2();
    c1.sum3();
    d1.sum4();
    d1.sum();
}
