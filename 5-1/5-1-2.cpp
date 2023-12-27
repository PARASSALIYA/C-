#include <iostream>
using namespace std;

class Cricket
{
public:
    void getTotalOvers()
    {
        cout << "Cricket"<<endl;
    }
};

class T20Match : public Cricket
{
public:
    void getTotalOvers()
    {
        cout << "20 over"<<endl;
    }
};
class TestMatch : public Cricket
{
public:
    void getTotalOvers()
    {
        cout << "90 over"<<endl;
    }
};
int main()
{
    T20Match t1;
    t1.T20Match ::getTotalOvers();
    TestMatch t2;
    t2. TestMatch::getTotalOvers();
}