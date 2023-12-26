#include <iostream>
#include <string.h>
using namespace std;

class RailwayA
{
protected:
    int train_number;
    char train_name[20];
    char source[20];
    char destintion[20];
    char train_time[10];

public:
    void setraildata()
    {
        cout << endl;
        cout << "Enter train number :";
        cin >> this->train_number;
        fflush(stdin);
        cout << "Enter train name :";
        gets(this->train_name);
        cout << "Enter source :";
        gets(this->source);
        cout << "Enter destintion : ";
        gets(this->destintion);
        cout << "Enter train time :";
        gets(this->train_time);
    }
};
class RailwayB : public RailwayA
{
public:
    void getraildata()
    {
        cout << endl;
        cout << "train number\t:" << this->train_number << endl;
        cout << "train name\t:" << this->train_name << endl;
        cout << "train source\t:" << this->source << endl;
        cout << "train destintion:" << this->destintion << endl;
        cout << "train time\t:" << this->train_time << endl;
    }
};

class RailwayC : public RailwayB
{
public:
    void railway(int t)
    {
        cout << "Enter a number of trains tp print details:";
        cin >> t;
    }
};
int main()
{
    int n, t;
    cout << "Enter N :";
    cin >> n;

    RailwayB b[n];
    RailwayC c;

    for (int i = 1; i <= n; i++)
    {
        b[i].setraildata();
    }
    for (int i = 1; i <= n; i++)
    {
        b[i].getraildata();
    }

    c.railway(t);
    if (t == 1)
    {
        b[1].getraildata();
    }
    else if (t == 2)
    {
        b[2].getraildata();
    }
    else if (t == 3)
    {
        b[3].getraildata();
    }
    else
    {
        cout << "this detali we can not find!!";
    }
}