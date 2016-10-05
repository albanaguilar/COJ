#include <iostream>

using namespace std;

int main()
{
    long r1, s, i, r2;
    cin >> r1 >>s;
    if( (r1 > -1000 && r1 < 1000) && (s > -1000 && s < 1000) )
    {
        r2 = (s * 2) - r1;
        cout <<r2;
    }
    return 0;
}
