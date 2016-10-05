#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    long ir = 0;
    long array[100];
    long num;

    cin >> num;

    while(num != 0)
    {
        array[ir] = num;
        ir++;
        cin >> num;
    }

    cout << "\n";
    long k;
    for(k = 0; k < ir; k++)
    {
        if (array[k] % 11 == 0)
        {
            cout << array[k] <<" is a multiple of 11." <<endl;
        }
        else
        {
            cout << array[k] <<" is not a multiple of 11." <<endl;
        }
    }


    return 0;
}
