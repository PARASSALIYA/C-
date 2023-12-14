#include <iostream>
using namespace std;

class customer
{
private:
    int cust_id;
    char cust_name[20];
    int cust_age;
    char cust_city[20];
    long long int cust_mobile;
    int cust_simvali;
    char cust_telecom[20];

public:
    void indata()
    {
        cout << endl;
        cout << "Enter your id :";
        cin >> cust_id;
        fflush(stdin);
        cout << "Enter your name :";
        gets(cust_name);
        cout << "Enter your age :";
        cin >> cust_age;
        fflush(stdin);
        cout << "Enter your city :";
        gets(cust_city);
        cout << "enter your mobile number :";
        cin >> cust_mobile;
        cout << "Enter your simcard validity :";
        cin >> cust_simvali;
        fflush(stdin);
        cout << "Enter your telecom name :";
        gets(cust_telecom);
    }
    void outdata()
    {
        cout<<endl;
        cout << "customer id   :" << cust_id;
        cout << endl;
        cout << "customer name :" << cust_name;
        cout << endl;
        cout << "customer age  :" << cust_age;
        cout << endl;
        cout << "customer city :" << cust_city;
        cout << endl;
        cout << "customer mobile number :" << cust_mobile;
        cout << endl;
        cout << "customer simcard validity :" << cust_simvali;
        cout << endl;
        cout << "customer telecom name :" << cust_telecom;
        cout << endl;
    }
};
int main()
{
    customer c, c1, c2, c3, c4;

    c.indata();
    c1.indata();
    c2.indata();
    c3.indata();
    c4.indata();

    cout << endl;
    cout << "---------- CUSTOMER RECORD ----------";
    cout << endl;

    c.outdata();
    c1.outdata();
    c2.outdata();
    c3.outdata();
    c4.outdata();
}