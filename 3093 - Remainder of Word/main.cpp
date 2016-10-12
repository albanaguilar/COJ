#include <iostream>
#include <string>


using namespace std;

int main()
{
    int iR = 1, i;
    string letras;
    cin >> letras;

    for (i = 0; i < letras.length(); i++)
    {
        iR = ( iR * (letras[i] - 65 + 1) ) % 26;
    }

    if ( iR >= 10)
    {
        cout << iR <<endl;
    }
    else
    {
        cout <<"0" <<iR <<endl;
    }

    return 0;
}
