#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    string stringProvided;
    do{
    getline(cin, stringProvided);
    if(stringProvided == "0")
    {
        return 0;
    }

    int num, i;
    num = stringProvided.length();
    int result = 0, counter = 0;

    for(i = num; i >= 1; i--)
    {
        result += stringProvided[counter] * pow(i, i);
    }
    cout << result;
    }
    while(stringProvided != "0");

    return 0;
}
