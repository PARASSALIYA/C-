#include <iostream>
#include <string.h>
using namespace std;

  class employee
{
public:
  int emp_id;
  char emp_name[20];
  int emp_age;
  char emp_role[20];
  int emp_salary;
  char emp_city[20];
  int emp_exp;
  char emp_cmpname[20];
};
int main()
{
  employee e1, e2, e3, e4, e5;

  cout << "Enter your ID : ";
  cin >> e1.emp_id;
  fflush(stdin);
  cout << "Enter your NAME :";
  gets(e1.emp_name);
  cout << "Enter your AGE :";
  cin >> e1.emp_age;
  fflush(stdin);
  cout << "Enter your ROLE :";
  gets(e1.emp_role);
  cout << "Enter your SALARY :";
  cin >> e1.emp_salary;
  fflush(stdin);
  cout << "Enter your CITY :";
  gets(e1.emp_city);
  cout << "Enter your EXP :";
  cin >>   e1.emp_exp;
  fflush(stdin);
  cout << "Enter your CMPNAME :";
  gets(e1.emp_cmpname);

  cout << endl;
  cout << endl;

  cout << "Enter your ID : ";
  cin >> e2.emp_id;
  fflush(stdin);
  cout << "Enter your NAME :";
  gets(e2.emp_name);
  cout << "Enter your AGE :";
  cin >> e2.emp_age;
  fflush(stdin);
  cout << "Enter your ROLE :";
  gets(e2.emp_role);
  cout << "Enter your SALARY :";
  cin >> e2.emp_salary;
  fflush(stdin);
  cout << "Enter your CITY :";
  gets(e2.emp_city);
  cout << "Enter your EXP :";
  cin >> e2.emp_exp;
  fflush(stdin);
  cout << "Enter your CMPNAME :";
  gets(e2.emp_cmpname);

  cout << endl;
  cout << endl;

  cout << "Enter your ID : ";
  cin >> e3.emp_id;
  fflush(stdin);
  cout << "Enter your NAME :";
  gets(e3.emp_name);
  cout << "Enter your AGE :";
  cin >> e3.emp_age;
  fflush(stdin);
  cout << "Enter your ROLE :";
  gets(e3.emp_role);
  cout << "Enter your SALARY :";
  cin >> e3.emp_salary;
  fflush(stdin);
  cout << "Enter your CITY :";
  gets(e3.emp_city);
  cout << "Enter your EXP :";
  cin >> e3.emp_exp;
  fflush(stdin);
  cout << "Enter your CMPNAME :";
  gets(e3.emp_cmpname);

  cout << endl;
  cout << endl;

  cout << "Enter your ID : ";
  cin >> e4.emp_id;
  fflush(stdin);
  cout << "Enter your NAME :";
  gets(e4.emp_name);
  cout << "Enter your AGE :";
  cin >> e4.emp_age;
  fflush(stdin);
  cout << "Enter your ROLE :";
  gets(e4.emp_role);
  cout << "Enter your SALARY :";
  cin >> e4.emp_salary;
  fflush(stdin);
  cout << "Enter your CITY :";
  gets(e4.emp_city);
  cout << "Enter your EXP :";
  cin >> e4.emp_exp;
  fflush(stdin);
  cout << "Enter your CMPNAME :";
  gets(e4.emp_cmpname);

  cout << endl;
  cout << endl;

  cout << "Enter your ID : ";
  cin >> e5.emp_id;
  fflush(stdin);
  cout << "Enter your NAME :";
  gets(e5.emp_name);
  cout << "Enter your AGE :";
  cin >> e5.emp_age;
  fflush(stdin);
  cout << "Enter your ROLE :";
  gets(e5.emp_role);
  cout << "Enter your SALARY :";
  cin >> e5.emp_salary;
  fflush(stdin);
  cout << "Enter your CITY :";
  gets(e5.emp_city);
  cout << "Enter your EXP :";
  cin >> e5.emp_exp;
  fflush(stdin);
  cout << "Enter your CMPNAME :";
  gets(e5.emp_cmpname);

  cout << endl;
  cout << endl;
  cout << "----------EMPLOYEE DATA ---------";
  cout << endl;
  cout << endl;
  
  cout << "employee Id             :" << e1.emp_id << endl;
  cout << "employee name           :" << e1.emp_name << endl;
  cout << "employee age            :" << e1.emp_age << endl;
  cout << "employee role           :" << e1.emp_role << endl;
  cout << "employee salary         :" << e1.emp_salary << endl;
  cout << "employee city           :" << e1.emp_city << endl;
  cout << "employee experience     :" << e1.emp_exp << endl;
  cout << "employee company name   :" << e1.emp_cmpname << endl;

  cout << endl;
  cout << endl;

  cout << "employee Id              :" << e2.emp_id << endl;
  cout << "employee name            : " << e2.emp_name << endl;
  cout << "employee age             :" << e2.emp_age << endl;
  cout << "employee role            :" << e2.emp_role << endl;
  cout << "employee salary          :" << e2.emp_salary << endl;
  cout << "employee city            :" << e2.emp_city << endl;
  cout << "employee experience      :" << e2.emp_exp << endl;
  cout << "employee company name    :" << e2.emp_cmpname << endl;

  cout << endl;
  cout << endl;

  cout << "employee Id              :" << e3.emp_id << endl;
  cout << "employee name            :" << e3.emp_name << endl;
  cout << "employee age             :" << e3.emp_age << endl;
  cout << "employee role            :" << e3.emp_role << endl;
  cout << "employee salary          :" << e3.emp_salary << endl;
  cout << "employee city            :" << e3.emp_city << endl;
  cout << "employee experience      :" << e3.emp_exp << endl;
  cout << "employee company name    :" << e3.emp_cmpname << endl;

  cout << endl;
  cout << endl;

  cout << "employee Id              :" << e4.emp_id << endl;
  cout << "employee name            :" << e4.emp_name << endl;
  cout << "employee age             :" << e4.emp_age << endl;
  cout << "employee role            :" << e4.emp_role << endl;
  cout << "employee salary          :" << e4.emp_salary << endl;
  cout << "employee city            :" << e4.emp_city << endl;
  cout << "employee experience      :" << e4.emp_exp << endl;
  cout << "employee company name    :" << e4.emp_cmpname << endl;

  cout << endl;
  cout << endl;

  cout << "employee Id              :" << e5.emp_id << endl;
  cout << "employee name            :" << e5.emp_name << endl;
  cout << "employee age             :" << e5.emp_age << endl;
  cout << "employee role            :" << e5.emp_role << endl;
  cout << "employee salary          :" << e5.emp_salary << endl;
  cout << "employee city            :" << e5.emp_city << endl;
  cout << "employee experience      :" << e5.emp_exp << endl;
  cout << "employee company name    :" << e5.emp_cmpname << endl;
}