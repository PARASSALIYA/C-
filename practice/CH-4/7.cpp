#include <iostream>
using namespace std;

int main()
{
    int X, Y;
    cout << "Enter X :";
    cin >> X;
    cout << "Enter Y :";
    cin >> Y;

    cout << "ANS :" << (X * X * X) + (3 * X * X * Y) + (3 * X * Y * Y) + (Y * Y * Y);
}