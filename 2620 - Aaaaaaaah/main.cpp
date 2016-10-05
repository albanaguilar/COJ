#include <iostream>

using namespace std;

int main()
{
    long r;
    cin >> r;

    if(r > 0)
    {
        long diameter = (r + r) * 2;
        char varA = 'A';
        char varH = 'h';
        string a = "";
        long i;
        for(i = 0; i < diameter; i++)
        {
            a += "a";
        }
        cout << varA <<a <<varH <<endl;

    }




    return 0;
}
