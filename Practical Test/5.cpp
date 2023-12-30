#include <iostream>
#include <string.h>
using namespace std;

class Hotel
{
private:
    int h_number;
    char h_name[20];
    char h_type[20];
    int h_rating;
    char h_location[20];

public:
    Hotel(int h_number, char h_name[], char h_type[], int h_rating, char h_location[])
    {
        this->h_number = h_number;
        strcpy(this->h_name, h_name);
        strcpy(this->h_name, h_type);
        this->h_rating = h_rating;
        strcpy(this->h_location, h_location);

        cout << endl;
        cout << "Enter Hotel Number :" << this->h_number << endl;
        cout << "Enter Hotel Name :" << this->h_name << endl;
        cout << "ENter Hotel Type :" << this->h_type << endl;
        cout << "ENter Hotel Rating :" << this->h_rating << endl;
        cout << "Enter Hotel Location :" << this->h_location << endl;
        cout << endl;
    }
};
int main()
{
    int n;
    cout<<"Enter N :";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
    int h_number;
    char h_name[20];
    char h_type[20];
    int h_rating;
    char h_location[20];

    cout << "Enter Number :";
    cin >> h_number;
    fflush(stdin);
    cout << "Enter Name : ";
    gets(h_name);
    cout << "Enter Type :";
    gets(h_type);
    cout << "Enter Rating :";
    cin >> h_rating;
    fflush(stdin);
    cout << "Enter Location :";
    gets(h_location);

    Hotel h1(int h_number, char h_name[], char h_type[], int h_rating, char h_location[]);
   }
}
