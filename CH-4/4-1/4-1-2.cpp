#include <iostream>
using namespace std;
class P
{
public:
    int C;
    int f;
};
class Q : public P
{
public:
    double F;
    void toFehrenheit()
    {
        cout << "Enter Fehrenheit :";
        cin >> f;
        cout << "Enter celsius :";
        cin >> C;

        F = (C * 1.8) + 32;
        cout << "Fehrenheit :" << F << endl;
    }
};
class R : public Q
{
public:
    int kelvin;
    void tokelvin()
    {
        kelvin = (F - 32) * 5/9  +  273;
        cout << "KELVIN :" << kelvin;
    }
};

int main()
{
    Q q1;
    q1.toFehrenheit();

    R r1;
    r1.tokelvin();
}