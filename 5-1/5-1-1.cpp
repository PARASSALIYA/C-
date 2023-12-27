#include <iostream>
using namespace std;

class operations
{
public:
    void calculate(int a, int b)
    {
        cout << "division :" << a / b << endl;
    }
    void calculate(int a, int b, int c)
    {
        cout << "subtraction :" << a - b - c << endl;
    }
    void calculate(int a, int b, int c, int d)
    {
        cout << "multiplication :" << a * b * c * d << endl;
    }
    void calculate(int a, int b, int c, int d, int e)
    {
        cout << "addition :" << a + b + c + d + e << endl;
    }
};
int main()
{
    operations o1;
    o1.calculate(45, 56);
    o1.calculate(12, 67, 65);
    o1.calculate(23, 56, 65, 87);
    o1.calculate(34, 45, 56, 67, 78);
}