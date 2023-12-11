#include <iostream>
using namespace std;

int main()
{
    for (char i = 'A'; i <= 'E'; i++)
    {
        for (char j = i; j >= 'A'; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
/*
    A
    B A
    C B A
    D C B A
    E D C B A

*/