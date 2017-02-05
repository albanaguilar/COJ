#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    string sName;
    int iValue1, iValue2;
    cin >> sName >> iValue1 >> iValue2;

    cout << sName <<" " << abs(iValue2 - iValue1) << endl;

    return 0;
}
