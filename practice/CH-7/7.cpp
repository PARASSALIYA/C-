#include <iostream>
using namespace std;

int main()
{
    for (int i = 'A'; i <= 'E'; i++)
    {
        for (int j = i; j >= 'A'; j--)
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