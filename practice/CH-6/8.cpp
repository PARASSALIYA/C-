#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter any number :";
    cin >> n;
    if (n >= 1 && n <= 9)
    {
        cout << "digit : 1";
    }
    else if (n >= 10 && n <= 99)
    {
        cout << "digit  : 2";
    }
    else if (n >= 100 && n <= 999)
    {
        cout << "digit : 3";
    }

    else if (n >= 1000 && n <= 9999)
    {
        cout << "digit : 4";
    }
    else
    {
        cout << "digit : ";
    }
}