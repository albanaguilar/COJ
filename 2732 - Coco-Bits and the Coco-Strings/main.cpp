#include <iostream>
#include <string>

using namespace std;

int main()
{
    int testCases, i, j;
    string cadena;
    cin >> testCases;
    for(j = testCases; j > 0; j--)
    {
        cin >> cadena;
        for ( i = 0; i < cadena.length(); i++)
        {
            if( cadena[i] >= 65 && cadena[i] <= 90 )
            {
                cadena[i] = tolower(cadena[i]);
            }
            else if( cadena[i] >= 97 &&  cadena[i] <= 122 )
            {
                cadena[i] = toupper(cadena[i]);
            }
        }
        cout << cadena <<endl;
    }
    return 0;
}
