#include <iostream>
using namespace std;

class Shape
{
protected:
    int width;
    int height;

public:
    Shape()
    {
        cout << "Enter width:";
        cin >> width;
        cout << "Enter height:";
        cin >> height;
    }
};

class Triangle : public Shape
{
public:
    void Area()
    {
        cout << "triangle :" << 0.5 * width * height << endl;
    }
};
class Rectangle : public Shape
{
public:
    void Area()
    {
        cout << "rectangle :" << width * height << endl;
    }
};

int main()
{
    Triangle t1;
    t1.Area();

    Rectangle r1;
    r1.Area();
}