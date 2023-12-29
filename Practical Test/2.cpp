#include <iostream>
#include <string.h>
using namespace std;
class Bank
{
private:
    int number;
    char name[20];
    char type[20];
    char branch[20];
    int balance;

public:
    void setbank()
    {
        cout << endl;
        cout << "Enter Number :";
        cin >> this->number;
        fflush(stdin);
        cout << "Enter Name :";
        gets(this->name);
        cout << "Enter Type :";
        gets(this->type);
        cout << "Enter Branch :";
        gets(this->branch);
        cout << "Enter Balance :";
        cin >> this->balance;
        cout << endl;
    }

    void getbank()
    {
        cout << endl;
        cout << " Number :" << this->number << endl;
        cout << " Name :" << this->name << endl;
        cout << " Type :" << this->type << endl;
        cout << " Branch :" << this->branch << endl;
        cout << " Balance :" << this->balance << endl;
        cout << endl;
    }
    void searchdata()
    {
    }
};
int main()
{
    int n, i;
    cout << "Enter N :";
    cin >> n;

    Bank b1[n];
    for (i = 1; i <= n; i++)
    {
        b1[i].setbank();
    }
    for (i = 1; i <= n; i++)
    {
        b1[i].getbank();
    }
}