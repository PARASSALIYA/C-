#include <iostream>
using namespace std;

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
/* 5
   4 4
   3 3 3
   2 2 2 2
   1 1 1 1 1
*/