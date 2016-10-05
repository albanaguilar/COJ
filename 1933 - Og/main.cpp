#include <iostream>

using namespace std;

int main()
{
    int a, b, sum;
    do
    {
        cin >> a >> b;
        if(a == 0 && b == 0)
        {
            break;
        }
        sum = a + b;
        cout << sum <<endl;
    }
    while(a != 0 && b != 0);


    return 0;
}
