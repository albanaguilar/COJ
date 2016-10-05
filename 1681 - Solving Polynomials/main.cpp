#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    long a, b, c;
    cin >> a >> b >> c;
    double option1 = 0, option2 = 0, raiz = 0.0;
    double f = 4.0;

    double adentro = (b * b) - ((f) * (a) * (c));
    if(adentro >= 0)
    {
        cout <<"YES"<<endl;
    }
    else{
        cout <<"NO"<<endl;
    }
    return 0;
}
