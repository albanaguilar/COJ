#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sCode;
    int iNotOdd = 1;
    getline(cin, sCode);

    for (int i = ( sCode.length() / 2 ) - 1; i >= 0; i--){
        cout << sCode[i];
    }

    if (sCode.length() % 2 == 1)
    {
        cout << sCode[sCode.length() / 2];
        iNotOdd = 0;
    }

    for (int j = sCode.length() - 1; j > ( sCode.length() / 2 ) - iNotOdd; j--){
        cout << sCode[j];
    }

    return 0;
}
