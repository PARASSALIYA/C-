#include <iostream>
using namespace std;

class Number
{
public:
int n;
     void number()
    {
        cout << "Enter N : ";
        cin >> n;
    }
};
class Square : public Number
{
public:
    void square()
    {
        cout << "Square : " << n * n<<endl;
    }
};
class Cube : public Number
{
public:
    void cube()
    {
        cout << "Cube : " <<n * n * n << endl;
    }
};
int main()
{
    Square s1;
    s1.number();
    s1.square();
    Cube c1;
    c1.number();
    c1.cube();
}