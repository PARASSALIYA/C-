#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "ENter size of Array :";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] :";
        cin >> a[i];
    }
    cout << endl;
    cout << "Even elements of an array :";

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] ;
        }
    }
    return 0;
}
