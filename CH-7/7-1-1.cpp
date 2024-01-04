#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a, b, n;
    char error[] = "cannot be divided by zero";

    cout << "ENter A :";
    cin >> a;
    cout << "Enter B :";
    cin >> b;

    try
    {
        if (a == 0 || b == 0)
        {
            throw error;
        }
        else
        {
            cout << "A / B :" << a / b << endl;
        }
    }
    catch (char error[])
    {
        cout << error;
    }
    cout << "Enter N :";
    cin >> n;
    try
    {
        if (n >= 18)
        {
            cout << "You can vote " << endl;
        }
        else
        {
            cout << "You can not vote " << endl;
        }
    }
    catch (char error[])
    {
        cout << error;
    }
    char psw[20];
    fflush(stdin);
    cout << "Enter your password : ";
    cin >> psw;
    try
    {
        for (int i = 0; i != '\0'; i++)
        {
            if (psw[i] <= 'A' && psw[i] >= 'Z')
            {
                cout << "Your Password Is Correct ";
            }
            else
            {
                throw error;
            }
        }
    }
    catch (char error[])
    {
        cout << error << endl;
    }
}