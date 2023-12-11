#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any nubmer : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << n << i << n * i;
        cout << endl;
    }
}