#include <iostream>

using namespace std;

int main()
{
    int rows, columns, i, j;
    cin >> rows >>columns;
    int array[rows][columns];
    if(rows >= 1 && columns <= 100)
    {
        for(i = 0; i < rows; i++)
        {
            for(j = 0; j < columns; j++)
            {
                cin >> array[i][j];
            }
        }
        int r, c;
        cin >>r >>c;
        int arrayB[r][c];
        if(r >= 1 && c <= 100)
        {
            for(i = 0; i < r; i++)
            {
                for(j = 0; j < c; j++)
                {
                    cin >> arrayB[i][j];
                }
            }

            int altarray[(rows * r) * (columns * c)];
            for(i = 0; i < (rows * r); i++)
            {
                for(j = 0; j < (columns * c); j++)
                {
                    altarray[i] = array[i][j] * arrayB[i][j];
                }
            }
            for(i = 0; i < (rows * r); i++)
            {
                for(j = 0; j < (columns * c); j++)
                {
                    cout << altarray[i] <<" ";
                }
                cout <<endl;
            }
        }
    }
    return 0;
}
