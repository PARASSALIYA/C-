#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
protected:
  int e_id;
  char e_name[20];
  char e_role[20];
  int e_salary;
  int e_expires;
  char comp_name[20];
  char e_address[20];
  char e_email[20];
  long long int e_contact;

public:
  void setA()
  {
    cout << "Enter ID :";
    cin >> this->e_id;
    fflush(stdin);
    cout << "Enter NAME :";
    gets(this->e_name);
    cout << "Enter ROLE :";
    cin >> this->e_role;
  }
};
class B : public Employee
{
public:
  void setB()
  {
    cout << "Enter SALARY:";
    cin >> this->e_salary;
    cout << "Enter EXPERIENCE:";
    cin >> this->e_expires;
  }
};
class C : public B
{
public:
  void setC()
  {
    cout << "Enter COMP_NAME :";
    cin >> this->comp_name;
    cout << "Enter ADDRESS :";
    cin >> this->e_address;
  }
  void getC()
  {
    cout << endl;
    cout << "NAME\t\t: " << this->e_name << endl;
    cout << "ROLE\t\t: " << this->e_role << endl;
    cout << "SALARY\t\t: " << this->e_salary << endl;
  }
};
class D : public C
{
public:
  void setD()
  {
    cout << "Enter EMAIL :";
    cin >> this->e_email;
    cout << "Enter CONTACT :";
    cin >> this->e_contact;
  }

  void getD()
  {
    cout << endl;
    cout << "ID\t\t: " << this->e_id << endl;
    cout << "NAME\t\t: " << this->e_name << endl;
    cout << "ROLE\t\t: " << this->e_role << endl;
    cout << "SALARY\t\t: " << this->e_salary << endl;
    cout << "EXPERIENCE\t: " << this->e_expires << endl;
    cout << "COMP_NAME\t: " << this->comp_name << endl;
    cout << "ADDRESS\t\t: " << this->e_address << endl;
    cout << "EMAIL\t\t: " << this->e_email << endl;
    cout << "CONTACT\t\t: " << this->e_contact << endl;
  }
};
int main()
{
  D d1;
  d1.setA();
  d1.setB();
  d1.setC();
  d1.setD();

  d1.getC();
  d1.getD();
}