#include <iostream>
#include <string>

using namespace std;

int main()
{
    long num1, num2, num3, IMin = 0, Imax = 0, Imed = 0, i;
    int array1[3];
    for(i = 0; (array1[i] != NULL) && (num1 <= 100) && (num2 <= 100) && (num3 <= 100) ; i++)
    {
        cin >> array1[i];
        cout <<array1[i];
    }

    cout <<endl;
    string order;
    getline(cin , order);
    int a, b, c;

    cout << order[i];
    cout <<endl;

    for(i = 0; i < order.length(); i++)
    {
        if(array1[i] > array1[Imax] && (array1[i] > array1[IMin]) )
           {
               order[i] = array1[i];
               c = order[i];
           }
        else if(array1[i] < array1[Imax] && (array1[i] < array1[IMin]) )
            {
                order[i] = array1[i];
                a = order[i];
            }
        else if( (array1[i] < array1[Imax]) && (array1[i] > array1[IMin]) )
        {
                order[i] = array1[i];
                b = order[i];
        }
    }
    for(i = 0; i < order.length(); i++)
    {
        cout << order[i] <<" ";
    }

    return 0;
}
