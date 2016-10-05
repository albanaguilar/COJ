#include <iostream>

using namespace std;

int main()
{
   int i;
   double array1[12];

   for(i = 0; i < 12; i++)
   {
       cin >> array1[i];
   }
   long double suma = 0;

   for(i = 0; i < 12; i++)
   {
       suma = suma + array1[i];
   }

   suma = suma / 12;
   cout <<"$" <<suma <<endl;
   return 0;
}
