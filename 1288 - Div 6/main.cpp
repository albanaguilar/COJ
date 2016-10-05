#include <iostream>
#include <string>
using namespace std;

int main()
{
    long i;
    int t;

    cin >> t;
    string arr[t];

    for(i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    for(i = 0; i < t; i++)
    {
        if(arr[i] % 6 == 0)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }

    return 0;
}
