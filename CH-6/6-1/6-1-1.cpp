#include <iostream>
#include <string.h>
using namespace std;

class Admin
{
    protected:
        char company_name[20];
        int manager_salary;
        int employee_salary;
        int total_staff;
        int total_annual_revenue;
        int can_terminate;

    public:
        void input()
        {

            cout << endl;
            cout << "Enter Company_name :";
            gets(this->company_name);
            cout << "Ente Manager_salary:";
            cin >> this->manager_salary;
            cout << "Enter EMployee _salary :";
            cin >> this->employee_salary;
            cout << "Enter Total_staff :";
            cin >> this->total_staff;
            cout << "Enter Total_annual_revenue :";
            cin >> this->total_annual_revenue;
            cout << "Enter Can_taeminate :";
            cin >> this->can_terminate;
        }
        void myaccess()
        {
             cout << endl;
            cout << "------- ADMIN DATA ---------";
            cout << endl;
            cout << "Enter Company_name :" << this->company_name << endl;
            cout << "Ente Manager_salary:" << this->manager_salary << endl;
            cout << "Enter EMployee _salary :" << this->employee_salary << endl;
            cout << "Enter Total_staff :" << this->total_staff << endl;
            cout << "Enter Total_annual_revenue :" << this->total_annual_revenue << endl;
            cout << "Enter Can_taeminate :" << this->can_terminate;
            cout << endl;
        }
};
class Manager : public Admin
{
public:
    void myaccess()
    {
         cout << endl;
        cout << "------- MANAGER DATA ---------";
        cout << endl;
        cout << "Enter Company_name :" << this->company_name << endl;
        cout << "Ente Manager_salary:" << this->manager_salary << endl;
        cout << "Enter EMployee _salary :" << this->employee_salary << endl;
        cout << "Enter Total_staff :" << this->total_staff << endl;
        cout << "Enter Can_taeminate :" << this->can_terminate;
         cout << endl;
    }
};
class Employee : public Manager
{

public:
    void myaccess()
    {
        cout << endl;
        cout << "------- EMPLOYEE DATA ---------";
        cout << endl;
        cout << "Enter Company_name :" << company_name << endl;
        cout << "Enter EMployee _salary :" << employee_salary << endl;
    }
};
int main()
{
    Employee e1;
    e1.input();
    e1.Admin::myaccess();
    e1.Manager::myaccess();
    e1.myaccess();
}
