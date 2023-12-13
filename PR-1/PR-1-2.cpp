#include <iostream>
using namespace std;

int main()
{
    int feet, feet2;
    int inch, inch2;
    int f, f2;
    double F, F2;

    cout << "Enter feet :";
    cin >> feet;
    cout << "Enter inch :";
    cin >> inch;
    cout << endl;
    cout << "Enter feet2 :";
    cin >> feet2;
    cout << "Enter inch2 :";
    cin >> inch2;
    cout << endl;

    F = inch % 12;
    F2 = inch2 % 12;

    f = feet + F;
    f2 = feet2 + F2;

    cout << "feet : " << f + f2 << " inch : " << F + F2;
}
