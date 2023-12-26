#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    void setover()
    {
        cout << "Enter A :";
        cin >> a;
        cout << "Enter B :";
        cin >> b;
    }
    void getover()
    {
         cout << "A :" << a << endl;
         cout << "B :" << b << endl;
        if (a < b)
        {
            cout << "a is higher value";
        }
        else
        {
            cout << "b is higher value";
        }
    }
 };

int main()
{
    A a1;
    a1.setover();

    a1.getover();
}
