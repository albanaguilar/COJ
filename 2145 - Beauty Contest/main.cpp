#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, i = 0, iCounter = 0, sum, iMayor = 0, iMenor = 1000;
    cin >> n;
    int iArr[10];
    while (i < n){
        iCounter++;
        sum = 0, iMayor = 0, iMenor = 1000;
        for (int j = 0; j < 10; j++ ){
            cin >> iArr[j];
        }

        for (int j = 0; j < 10; j++ ){
            if ( iArr[j] > iMayor ){
                iMayor = iArr[j];
            }
        }

        for (int j = 0; j < 10; j++ ){
            if ( iArr[j] < iMenor ){
                iMenor = iArr[j];
            }
        }

        for (int j = 0; j < 10; j++ ){
            //if ( iArr[j] != iMayor && iArr[j] != iMenor ){
               // cout << sum << " " << iArr[j] << endl;
                sum += iArr[j];
            //}
        }
        sum = (sum - iMayor) - iMenor;
       // cout << iMayor <<" " << iMenor << endl;
        cout << iCounter << " " <<sum << endl;
        i++;
    }
    return 0;
}
