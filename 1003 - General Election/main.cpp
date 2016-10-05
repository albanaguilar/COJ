/*#include <iostream>

using namespace std;

int main()
{
    int testCases, iarr[101][101], number, region, i ,f = 0 , k, j, a, b;
    cin >> testCases;

    while ( f < testCases)
    {
        cin >> number >> region;
        for ( j = 0; j < region ; j++)
        {
            for ( k = 0; k < number; k++)
            {
                cin >> iarr[j][k];
            }
        }
        int suma = 0, mayor = -1, candidatoGanador = -1;

        for( a = 0; a < number ; a++)
        {
            suma = 0;

            for( b = 0; b < region ; b++)
            {
                suma += iarr[k][j];
            }

              if( suma > mayor )
              {
                   mayor = suma;
                   candidatoGanador = a + 1;
              }
        }
        cout << candidatoGanador << endl;
        f = f + 1;
    }

    return 0;
}*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{   int  T,n,m,votos[101][101];
    while((cin>>T)&& T){
        while(T--){
           cin>>n>>m;
           for(int i=0;i<m;i++){
              for(int j=0;j<n;j++){
                 cin>>votos[i][j];
              }
           }
           int sum,may=-1, candidato=-1;
           for(int i=0;i<n;i++){
               sum=0;
               for(int j=0;j<m;j++){
                    sum+=votos[j][i];
              }
              if(sum>may){
                   may = sum;
                   candidato=i+1;
              }
           }
           cout<<candidato<<endl;
        }
    }
    return 0;
}

