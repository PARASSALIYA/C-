#include <iostream>
#include <string.h>
using namespace std;

class cafe
{
private:
   int cafe_id;
   char cafe_name[20];
   char cafe_type[20];
   int cafe_rating;
   char cafe_location[20];
   int cafe_estalish;
   int cafe_staff_quantity;

public:
   cafe()
   {
      cout << endl;
      cout << "Enter Cafe Id :";
      cin >> this->cafe_id;
      fflush(stdin);
      cout << "Enter Cafe Name :";
      gets(this->cafe_name);
      cout << "Enter your Cafe type :";
      gets(this->cafe_type);
      cout << "Enter your Cafe rating : ";
      cin >> this->cafe_rating;
      fflush(stdin);
      cout << "enter your Cafe location:";
      gets(this->cafe_location);
      cout << "enter your Cafe establish year:";
      cin >> this->cafe_estalish;
      fflush(stdin);
      cout << "enter your Cafe staff quantity:";
      cin >> this->cafe_staff_quantity;
      cout << endl;
   }

   void getcafe()
   {

      cout << "CAFE ID :" << this->cafe_id << endl;
      cout << "CAFE NAME :" << this->cafe_name << endl;
      cout << "CAFE TYPE :" << this->cafe_type << endl;
      cout << "CAFE RATING :" << this->cafe_rating << endl;
      cout << "CAFE LOCATIoN :" << this->cafe_location << endl;
      cout << "CAFE ESTABLISHED YEAR :" << this->cafe_estalish << endl;
      cout << "CAFE STAFF QUANTITY :" << this->cafe_staff_quantity << endl;
   }
};
int main()
{
   int n;
   cout << "Enter N number :";
   cin >> n;

   cafe c1[n];
   cafe c2[n];
   c2[n].getcafe();
}