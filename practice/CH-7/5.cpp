#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
/* 1 1 1 1 1 
   2 2 2 2
   3 3 3
   4 4
   5 */