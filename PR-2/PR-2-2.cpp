#include <iostream>
#include <string.h>
using namespace std;

class MarketA
{
protected:
    int item_Number;
    char item_Name[20];
    int item_Quantity;
    int item_Price;
    char item_Discount[20];

public:
    void input()
    {
        cout << endl;
        cout << "Enter number :";
        cin >> this->item_Number;
        fflush(stdin);
        cout << "Enter name :";
        gets(this->item_Name);
        cout << "Enter quantity :";
        cin >> this->item_Quantity;
        cout << "Enter price :";
        cin >> this->item_Price;
        fflush(stdin);
        cout << "Enter discount :";
        gets(this->item_Discount);
    }
};
class marketC : public MarketA
{
public:
    void getmarket()
    {
        cout << endl;
        cout << "Number :" << this->item_Number << endl;
        cout << "Name :" << this->item_Name << endl;
        cout << "Quantity :" << this->item_Quantity << endl;
        cout << "Price :" << this->item_Price << endl;
        cout << "Discount :" << this->item_Discount << endl;
    }
};
int main()
{
    int n;
    cout << "Enter your items :";
    cin >> n;
    marketC c1[n];
    for (int i = 0; i < n; i++)
    {
        c1[n].input();
    }
    for (int i = 0; i < n; i++)
    {
        c1[n].getmarket();
    }
    char user_id[20] = "abc";
    char psw[20] = "1234";
    char id[20];
    char psw2[20];

    cout << " --------: varify :---------";
    cout << endl;
    cout << "Enter user id :";
    gets(id);
    cout << "Enter PSW :";
    gets(psw2);
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        if ((user_id[i] == id[i]) && (psw[i] = psw2[i]))

        {
            c1[n].getmarket();
        }
        else
        {
            cout << "YOUR PASSWORD AND ID IS WRONG!!";
        }
    }
}