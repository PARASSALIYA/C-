#include <iostream>
using namespace std;

class student
{
public:
    int s_id;
    char s_name[20];
    int s_age;

private:
    int s_id1;
    char s_name1[20];
    int s_age1;
    // Cannot access private attributes
};
int main()
{
    student s;
    cout << "Enter your ID :";
    cin >> s.s_id;
    fflush(stdin);
    cout << "Enter your NAME :";
    gets(s.s_name);
    cout << "Enter your AGE :";
    cin >> s.s_age;
    cout << endl;
    cout << "Student id : " << s.s_id;
    cout << endl;
    cout << "Student name : " << s.s_name;
    cout << endl;
    cout << "Student age : " << s.s_age;
    cout << endl;
}
