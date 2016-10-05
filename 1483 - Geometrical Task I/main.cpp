#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    long a, b, result;
    cin >> s;
    int longofword;
    longofword = s.length();

    cin >> a;
    if( longofword == 9)
    {
        cin >> b;
    }
    else
        b = a;

    cout << a * b;
    return 0;
}
