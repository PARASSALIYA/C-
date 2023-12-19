#include <iostream>
using namespace std;

class X
{
public:
    int a, b, c;
    int ans;
};
class Y : public X
{
public:
    void setdata()
    {
        cout << "Enter A :";
        cin >> a;
        cout << "Enter B :";
        cin >> b;
        cout << "Enter C :";
        cin >> c;
    }
    void getdata()
    {
        ans = (a * a * a) + (b * b * b) + (c * c * c);
        cout << "ANS :" << ans << endl;
    }
};
int main()
{
    Y y1;
    y1.setdata();
    y1.getdata();
}
