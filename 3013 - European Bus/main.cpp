#include <iostream>

using namespace std;

int main()
{
    int testCases, personas = 0, numero;
    cin >> testCases;

    for ( int contador = 0; contador < testCases; contador++ )
    {
        cin >> numero;
        personas = 0;
        for (int k = 0; k < numero; k++)
        {
           personas = personas * 2 + 1;
        }

        cout << personas<< endl;
    }

    return 0;
}
