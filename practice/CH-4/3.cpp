#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter A : ";
    cin >> a;
    cout << "Enter B :";
    cin >> b;

    c = a;
    a = b;
    b = c;
    b = c;

    cout << "A :" << a;
    cout << endl;
    cout << "B :" << b;
}