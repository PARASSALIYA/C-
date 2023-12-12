#include<iostream>
using namespace std;

int main()
{
    int s,h,m,s1 ;
    cout << "Enter seconds :";
    cin>> s;
     
     h=s/3600; 
     m=(s%3600)/60;
     s1=(s%3600)%60;

     cout << h <<":"<<m <<":" << s1;
}