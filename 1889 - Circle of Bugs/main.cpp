#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void selectSort(int iArr[], int n)
{
//pos_min is short for position of min
	int pos_min,temp;

	for (int i=0; i < n-1; i++)
	{
	    pos_min = i;//set pos_min to the current index of array

		for (int j=i+1; j < n; j++)
		{

		if (iArr[j] < iArr[pos_min])
                   pos_min=j;
	//pos_min will keep track of the index that min is in, this is needed when a swap happens
		}

	//if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
            if (pos_min != i)
            {
                 temp = iArr[i];
                 iArr[i] = iArr[pos_min];
                 iArr[pos_min] = temp;
            }
	}
}

int main()
{
    int n, iAux;
    cin >> n;
    int iArr[n];
    for (int i = 0; i < n; i++ ){
        cin >> iArr[i];
    }

    selectSort( iArr, n);

    int sum = 0;
    for (int i = n - 1, j = 0; i > (n - 1) - 10; i--){
       // cout << sum << "+" <<iArr[i] <<endl;
        sum += iArr[i];
    }

    double pi = 2*acos(0);//sqrt(sum / pi);
    double radius = sum / (2 * pi);
    cout << fixed << setprecision(4) << radius << endl;

    return 0;
}
