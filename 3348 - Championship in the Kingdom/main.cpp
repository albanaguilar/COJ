#include <iostream>

using namespace std;

int main()
{
    int numberOfPersons, quantityOfWins, combatsRealized = 0;

    cin >>numberOfPersons >> quantityOfWins;

    for( int iContador = 0; iContador < numberOfPersons; iContador++ )
    {
        combatsRealized = combatsRealized + iContador ;
    }

        if( (numberOfPersons * quantityOfWins) > combatsRealized )
            {
                cout << -1 << endl;
            }
        else
            {
                combatsRealized = numberOfPersons * quantityOfWins;
                cout << combatsRealized << endl;
            }

    return 0;
}


