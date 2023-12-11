#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter A :";
    cin >> a;
    cout << "Enter B :";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "A :" << a;
    cout << endl;
    cout << "B :" << b;
}