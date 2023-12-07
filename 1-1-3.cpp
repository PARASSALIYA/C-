#include <iostream>
using namespace std;

int main()
{
    char n[20];
    cout << "Enter the string :";
    gets(n);

    int i;
    for (i = 0; i <= 20; i++)
    {
        if (n[i] >= 'A' && n[i] <= 'Z')
        {
            n[i] += 32;
        }
        else if (n[i] >= 'a' && n[i] <= 'z')
        {
            n[i] -= 32;
        }
    }

    cout << n;
}
