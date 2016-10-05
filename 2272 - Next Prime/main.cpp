#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    long int n;
    int i, j;
    cin >> n;

    int farray[n];
    bool flag = false;

    for(i = 0; i < n; i++)
    {
        cin >> farray[i];
    }

    int addup = 2, anotherAddUp = 1;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
        addup = 2;
        anotherAddUp = 1;
        while(flag != true)
        {
            if((farray[j] + anotherAddUp) % addup != 0) //2
            {
                addup = addup + 1;    //
                if((farray[j] + anotherAddUp) % addup != 0) //3
                {
                    addup = addup + 1;
                    if((farray[j] + anotherAddUp) % addup != 0) //4
                    {
                        addup = addup + 1;
                        if((farray[j] + anotherAddUp) % addup != 0) //5
                        {
                            flag = true; //fuck yes bro
                            cout << farray[j] + anotherAddUp <<endl;
                        }
                    }
                }
            }
            else
            {
                anotherAddUp++;
            }
        }
        }
    }



    return 0;
}
