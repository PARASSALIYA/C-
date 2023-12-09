#include <iostream>
using namespace std;

int main()
{
    int X, Y;
    cout << "Enter X :";
    cin >> X;
    cout << "Enter Y :";
    cin >> Y;

    cout << "ANS :" << (X * X) - (Y * Y) + (2 * X * Y);
}