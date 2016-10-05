#include <iostream>

using namespace std;

int main()
{
    long n, i, counter = 1;
    cin >> n;

    for(i = 0; i < n; i++, counter++)
    {
        cout << counter <<": " <<"I am participating in the Engineer's day." <<endl;
    }

    return 0;
}
