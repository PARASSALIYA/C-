#include <iostream>
#include <string.h>
using namespace std;

class diamondcmp
{
   int comp_id;
   char comp_name[20];
   int comp_staff_quantity;
   int comp_revenue;
   int comp_import_raw_diamonds;
   int comp_export_diamonds;
   char comp_ceo[20];

public:
   diamondcmp(int comp_id, char comp_name[], int comp_staff_quantity,
              int comp_revenue, int comp_import_raw_diamonds,
              int comp_export_diamonds, char comp_ceo[])
   {
      cout << endl;
      this->comp_id = comp_id;
      cout << endl;
      strcpy(this->comp_name, comp_name);
      cout << endl;
      this->comp_staff_quantity = comp_staff_quantity;
      cout << endl;
      this->comp_revenue = comp_revenue;
      cout << endl;
      this->comp_import_raw_diamonds = comp_import_raw_diamonds;
      cout << endl;
      this->comp_export_diamonds = comp_export_diamonds;
      cout << endl;
      strcpy(this->comp_ceo, comp_ceo);
      cout << endl;

      cout << "ID :" << this->comp_id;
      cout << endl;
      cout << "NAME :" << this->comp_name;
      cout << endl;
      cout << "STAFF QUANTITY :" << this->comp_staff_quantity;
      cout << endl;
      cout << "REVENUE  :" << this->comp_revenue;
      cout << endl;
      cout << "RAW_DIAMONDS :" << this->comp_import_raw_diamonds;
      cout << endl;
      cout << "EX_DIAMONDS :" << this->comp_export_diamonds;
      cout << endl;
      cout << "CEO NAME " << this->comp_ceo;
      cout << endl;
   }
};

int main()
{
   int n;
   cout << "Enter size :";
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      int comp_id;
      char comp_name[20];
      int comp_staff_quantity;
      int comp_revenue;
      int comp_import_raw_diamonds;
      int comp_export_diamonds;
      char comp_ceo[20];
      cout << endl;
      cout << "Enter ID :";
      cin >> comp_id;
      fflush(stdin);
      cout << "Enter NAME :";
      gets(comp_name);
      cout << "Enter STAFF QUANTITY :";
      cin >> comp_staff_quantity;
      cout << "Enter REVENUE :";
      cin >> comp_revenue;
      cout << "Enter IMPORT RAW DIAMONDS :";
      cin >> comp_import_raw_diamonds;
      cout << "Enter EXPORT DIAMONDS : ";
      cin >> comp_export_diamonds;
      fflush(stdin);
      cout << "Enter CEO NAME :";
      gets(comp_ceo);
      cout << endl;
      diamondcmp d1(comp_id, comp_name, comp_staff_quantity, comp_revenue,
                    comp_import_raw_diamonds, comp_export_diamonds, comp_ceo);
   }
}
