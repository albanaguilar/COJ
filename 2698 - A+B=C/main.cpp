#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sCombinacion, alternativo = "";
    getline(cin, sCombinacion);
    int num, acum = 0, i = 0;

    for(i = 0; i < sCombinacion.length(); i++)
    {
        if( sCombinacion[i] != ' ')
        {
            alternativo += sCombinacion[i];
        }
    }

    for ( i = 0; i < alternativo.length(); i++)
    {
        num = alternativo[i] - 64;
        acum += num;
    }
    cout << acum << endl;

    return 0;
}
