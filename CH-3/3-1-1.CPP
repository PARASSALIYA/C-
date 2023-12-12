#include <iostream>
using namespace std;

class student
{
private:
    int stu_id;
    char stu_name[20];
    int stu_age;
    char stu_course[20];
    char stu_city[20];
    char stu_email[50];
    char stu_college[20];

public:
    void indata()
    {
        cout<<endl;
        cout << "Enter your ID :";
        cin >> stu_id;
        fflush(stdin);
        cout << "Enter your NAME :";
        gets(stu_name);
        cout << "Enter your AGE :";
        cin >> stu_age;
        fflush(stdin);
        cout << "Enter your COURSE :";
        gets(stu_course);
        fflush(stdin);
        cout << "Enter your CITY :";
        gets(stu_city);
        fflush(stdin);
        cout << "Enter your EMAIL :";
        gets(stu_email);
        fflush(stdin);
        cout << "Enter your COLLAGE :";
        gets(stu_college);
    }
    void outdata()
    {

        cout<<endl;
        cout << "Student ID      : " << stu_id;
        cout << endl;
        cout << "Student NAME    : " << stu_name;
        cout << endl;
        cout << "Student AGE     : " << stu_age;
        cout << endl;
        cout << "student COURSE  : " << stu_course;
        cout << endl;
        cout << "student CITY    : " << stu_city;
        cout << endl;
        cout << "student EMAIL   : " << stu_email;
        cout << endl;
        cout << "student COLLAGE : " << stu_college;
        cout << endl;
    }
};
int main()
{
    student s, s1, s2, s3, s4;

    s.indata();
    s1.indata();
    s2.indata();
    s3.indata();
    s4.indata();

    cout << endl;
    cout << "---------- STUDENT RECORD ----------";
    cout << endl;

    s.outdata();
    s1.outdata();
    s2.outdata();
    s3.outdata();
    s4.outdata();
}