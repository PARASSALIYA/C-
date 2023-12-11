#include <iostream>
using namespace std;

int main()
{
    int i = 1,n;
    cout<< "Enter any number : ";
    cin>>n;
    do
    {
        if(i%2==0)
        cout << i;
        i++;
        cout << " ";
    } while (i <= n);
}