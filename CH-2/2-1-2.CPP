#include <iostream>
#include <string.h>
using namespace std;

class car
{
public:
    int car_id;
    char car_cmpname[20];
    char car_color[20];
    char car_model[20];
    int car_releyear;
};

int main()
{
    car c1, c2, c3, c4;

    cout << "Enter your car ID :";
    cin >> c1.car_id;
    fflush(stdin);
    cout << "Enter your car CMPYNAME : ";
    gets(c1.car_cmpname);
    cout << "Enter your car COLOR :";
    gets(c1.car_color);
    cout << "Enter your car MODEL :";
    gets(c1.car_model);
    cout << "Enter your car RELEYEAR :";
    cin >> c1.car_releyear;
    cout << endl;
    cout << endl;

    cout << "Enter your car ID :";
    cin >> c2.car_id;
    fflush(stdin);
    cout << "Enter your car CMPYNAME : ";
    gets(c2.car_cmpname);
    cout << "Enter your car COLOR :";
    gets(c2.car_color);
    cout << "Enter your car MODEL :";
    gets(c2.car_model);
    cout << "Enter your car RELEYEAR :";
    cin >> c2.car_releyear;
    cout << endl;
    cout << endl;

    cout << "Enter your car ID :";
    cin >> c3.car_id;
    fflush(stdin);
    cout << "Enter your car CMPYNAME : ";
    gets(c3.car_cmpname);
    cout << "Enter your car COLOR :";
    gets(c3.car_color);
    cout << "Enter your car MODEL :";
    gets(c3.car_model);
    cout << "Enter your car RELEYEAR :";
    cin >> c3.car_releyear;
    cout << endl;
    cout << endl;

    cout << "Enter your car ID :";
    cin >> c4.car_id;
    fflush(stdin);
    cout << "Enter your car CMPYNAME : ";
    gets(c4.car_cmpname);
    cout << "Enter your car COLOR :";
    gets(c4.car_color);
    cout << "Enter your car MODEL :";
    gets(c4.car_model);
    cout << "Enter your car RELEYEAR :";
    cin >> c4.car_releyear;
    cout << endl;
    cout << endl;
    cout << " ---------- CAR DATA ---------- ";
    cout << endl;
    cout << endl;
    cout << "car ID           :" << c1.car_id << endl;
    cout << "CAR CMPYNAME     :" << c1.car_cmpname << endl;
    cout << "CAR COLOR        :" << c1.car_color << endl;
    cout << "CAR MODEL        :" << c1.car_model << endl;
    cout << "CAR RELEYEAR     :" << c1.car_releyear << endl;

    cout << endl;
    cout << endl;

    cout << "car ID           :" << c2.car_id << endl;
    cout << "CAR CMPYNAME     :" << c2.car_cmpname << endl;
    cout << "CAR COLOR        :" << c2.car_color << endl;
    cout << "CAR MODEL        :" << c2.car_model << endl;
    cout << "CAR RELEYEAR     :" << c2.car_releyear << endl;
    cout << endl;
    cout << endl;
    cout << "car ID           :" << c3.car_id << endl;
    cout << "CAR CMPYNAME     :" << c3.car_cmpname << endl;
    cout << "CAR COLOR        :" << c3.car_color << endl;
    cout << "CAR MODEL        :" << c3.car_model << endl;
    cout << "CAR RELEYEAR     :" << c3.car_releyear << endl;
    cout << endl;
    cout << endl;
    cout << "car ID           :" << c4.car_id << endl;
    cout << "CAR CMPYNAME     :" << c4.car_cmpname << endl;
    cout << "CAR COLOR        :" << c4.car_color << endl;
    cout << "CAR MODEL        :" << c4.car_model << endl;
    cout << "CAR RELEYEAR     :" << c4.car_releyear << endl;
    cout << endl;
    cout << endl;
}