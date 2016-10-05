#include <iostream>

using namespace std;

int main()
{
    long int n;
    int i, j;

    cin >> n;
    int farray[n];

    for(i = 0; i < n; i++)
    {
        cin >> farray[i];
    }



    int variableAuxiliar;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(farray[j] > farray[j + 1])
            {
                variableAuxiliar = farray[j];
                farray[j] = farray[j + 1];
                farray[j + 1] = variableAuxiliar;
            }
        }
    }

    for( i = 0 ; i < n ; i++ )
     {
         cout << farray[i] <<endl;
     }




    return 0;
}
