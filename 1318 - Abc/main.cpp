#include <iostream>
#include <string>
using namespace std;

int main()
{
    int iarr[3];

    for (int i = 0; i < 3; i++ )
    {
        cin >> iarr[i];
    }

    string s;
    cin >> s;

    int mayor = 0;
    int menor = 100;
    int enmedio = 0;

    for (int i = 0; i < 3; i++ )
    {
        if ( menor > iarr[i] )
        {
            menor = iarr[i];
        }
    }

    for (int i = 0; i < 3; i++ )
    {
        if ( mayor < iarr[i] )
        {
            mayor = iarr[i];
        }
    }

    for (int i = 0; i < 3; i++ )
    {
        if ( iarr[i] != mayor && iarr[i] != menor )
        {
            enmedio = iarr[i];
        }
    }

    for ( int i = 0; i < 3; i++ )
    {
        if ( s[i] == 'A' )
        {
            cout << menor;
        }
        else if ( s[i] == 'B' )
        {
            cout << enmedio;
        }
        else if ( s[i] == 'C' )
        {
            cout << mayor;
        }
        if ( i != 2 )
        {
            cout << " ";
        }
    }



    return 0;
}
