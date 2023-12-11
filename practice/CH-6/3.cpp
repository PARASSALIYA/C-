#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N :";
    cin >> n;
    while (n >= 1)
    {
        if (n % 2 == 1)
        cout << n;
        n--;
        cout << endl;
    }
}
