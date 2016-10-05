#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, powern = 1;
    for(i = n; i > 0; i--)
    {
        powern = pow(2.0, (double) n);
    }
    cout << endl;
    cout << powern;
    return 0;
}
