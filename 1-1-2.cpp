#include <iostream>
using namespace std;

int main()
{

    int y1, y2;
    cout << "Enter the first number :";
    cin >> y1;
    cout << "Enter the second  number :";
    cin >> y2;

    int a[y1];

    cout << "The array is :";
    cout << endl;
    for (int i = y1; i < = y2; i++)
    {
        if (i % 4 == 0)
        {
            cout << i << endl;
        }
    }
}