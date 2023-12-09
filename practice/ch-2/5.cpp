#include <iostream>
using namespace std;

int main()
{
    int P, R, T,I;
    cout << "Enter Principal : ";
    cin >> P;
    cout << "Enter Rate :";
    cin >> R;
    cout << "Enter Time :";
    cin >> T;

    I = (P * R * T) / 100;

    cout << "Simple interest :" << I;
}