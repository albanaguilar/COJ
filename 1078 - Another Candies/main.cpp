#include <iostream>

using namespace std;

int main()
{
    int testCases, extraVariable;
    cin >> testCases;

    for (int j = 0; j < testCases; j++)
    {
        int numberKids, sum = 0;
        cin >> numberKids;

        for(int i = 0; i < numberKids; i++)
        {
            cin >> extraVariable;
            sum = sum + extraVariable;
        }

        if (sum % numberKids == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
