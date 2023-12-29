#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter A :";
    cin >> a;
    cout << "Enter B :";
    cin >> b;
    char error[] = " ERROR";
    try
    {
        if (a == 0 || b == 0)
        {
            throw error;
        }
        else
        {

            cout << "A / B :" << a / b;
        }
    }
    catch (char n[])
    {
        cout << n;
    }
}