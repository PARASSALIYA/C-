#include<iostream>
using namespace std;

class RBI 
{
   public :
   void getROIR()
   {
     cout<<" RBI BANK : Repo Rate : 6.50%"<<endl;
   }
};
class SBI : public RBI
{
  public :
       getROIS()
       {
            cout<<" SBI BANK : 2 years to less than 3 years : 7.00%"<<endl;
       }
};
class BOB :public RBI 
{
       public :
       getROIB()
       {
            cout<<" BOB BANK : 2 years to less than 3 years : 3.50 "<<endl;
       }
};
class ICICI : public RBI 
{
        public :
       getROII()
       {
          cout<<" ICICI BANK : 151 days to 184 days : 5.25%"<<endl;      
       }
};

int main()
{
    SBI s1;
    s1.getROIR();
    s1.getROIS();
     BOB b1;
    b1.getROIB();

    ICICI i1;
    i1.getROII();
}