#include <iostream>

using namespace std;

int main()
{
    int index = 0;
    long n, t, i, j, iMax = 0;
    cin >> n;
    if( n >= 1 && n <= 100)
    {
        double iArr[n];
        for(i = 0; i < n && i <= 1000; i++)
        {
            cin >> iArr[i];
        }

        for(i = 1; i < n; i++)
        {
            if (iArr[i] >= iArr[iMax])
            {
                iMax = i;
            }
        }


        cout << iMax+1<<endl;
    }

    return 0;
}
