#include <iostream>
using namespace std;

int main()
{

    int n,a,b,f;
    cout << "Enter N :";
    cin >> n;
    a=10/n;
    b=10*n;
    f=10+n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Factorial : " <<f <<endl;
    }
}
