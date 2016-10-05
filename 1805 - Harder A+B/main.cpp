#include <iostream>

using namespace std;

int main()
{
    long b;
    long a, r;

    cin >> a >>b;


    if( 1 <= a && b <= 1000000000)
    {
         r = (a + b) + (a - b) + (b + a) + (b - a);
        cout << r;
    }

    return 0;
}
