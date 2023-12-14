#include <iostream>
using namespace std;

class hotel
{
private:
   int hotel_id;
   static char hotel_name[20];
   char hotel_type[20];
   int hotel_rating;
   char hotel_location[20];
   int hotel_estalish;
   char hotel_staff_quantity[20];
   char hotel_room_quantity[20];

public:
   void sethoteldata()
   {
      cout << endl;
      cout << "Enter hotel id :";
      cin >> this->hotel_id;
      fflush(stdin);
      cout << "Enter your hotel type :";
      cin >> this->hotel_type;
      cout << "Enter your hotel rating : ";
      cin >> this->hotel_rating;
      fflush(stdin);
      cout << "enter your hotel location:";
      gets(this->hotel_location);
      cout << "enter your hotel eatablished year:";
      cin >> this->hotel_estalish;
      fflush(stdin);
      cout << "enter your hotel staff quantity:";
      cin >> this->hotel_staff_quantity;
      cout << "enter your hotel room quantity:";
      cin >> this->hotel_room_quantity;
   }
   void gethoteldata()
   {
      cout << endl;
      cout << "Enter hotel id :" << this->hotel_id;
      cout << endl;
      cout << "Enter hotel name :" << this->hotel_name;
      cout << endl;
      cout << "Enter your hotel type :" << this->hotel_type;
      cout << endl;
      cout << "Enter your hotel rating : " << this->hotel_rating;
      cout << endl;
      cout << "enter your hotel location:" << this->hotel_location;
      cout << endl;
      cout << "enter your hotel eatablished year:" << this->hotel_estalish;
      cout << endl;
      cout << "enter your hotel staff quantity:" << this->hotel_staff_quantity;
      cout << endl;
      cout << "enter your hotel room quantity:" << this->hotel_room_quantity;
      cout << endl;
   }
};
char hotel::hotel_name[20] = "tip top";
int main()
{
   int n;
   hotel h[n];
   cout << "Enter nember of hotel :";
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      h[n].sethoteldata();
   }
   for (int i = 0; i < n; i++)
   {
      h[n].gethoteldata();
   }
}
