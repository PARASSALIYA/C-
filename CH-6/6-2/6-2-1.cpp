#include <iostream>
using namespace std;
class vf
{
public:
    virtual void calculate() = 0;
};
class circle : public vf
{
protected:
    int r;
    double Pi = 3.14;

public:
    void calculate()
    {
        cout << endl;
        cout << "Enter Radius :";
        cin >> r;
        cout << "Area of cicrle :" << Pi * r * r << endl;
    }
};
class triangle
{
protected:
    int l, b;

public:
    void calculate()
    {
        cout << endl;
        cout << "Area of L :";
        cin >> l;
        cout << "Area of B :";
        cin >> b;

        cout << "Area of rectangle :" << l * b << endl;
    }
};
class rectangle
{
protected:
    int a, b;
    float c = 0.5;

public:
    void calculate()
    {
        cout << endl;
        cout << "Enter A :";
        cin >> a;
        cout << "Enter B :";
        cin >> b;

        cout << "Area of triangle :" << c * a * b << endl;
    }
};
int main()
{
    circle c1;
    c1.calculate();
    triangle t1;
    t1.calculate();
    rectangle r1;
    r1.calculate();
}