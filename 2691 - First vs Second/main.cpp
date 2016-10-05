#include <iostream>

using namespace std;

int main()
{
    int a, b, i, suma1 = 0, suma2 = 0;
    cin >>a >> b;
    int arr1[a], arr2[b];

    for (i = 0; i < a; i++)
    {
        cin >> arr1[i];
        suma1 += arr1[i];
    }

    for (i = 0; i < b; i++)
    {
        cin >> arr2[i];
        suma2 += arr2[i];
    }

    if (suma1 > suma2)
    {
        cout << "first win" <<endl;
    }
    else if (suma1 < suma2)
    {
        cout << "second win" <<endl;
    }
    else if (suma1 == suma2)
    {
        cout << "tie" <<endl;
    }

    return 0;
}
