#include <stdio.h>
#include <string.h>

int main()
{
char datos[100],entrada[100], azul[3], verde[30];
int agregados,k, longitud, longitudbalin, cifras;

for (k=0; k<100; k++)
	  {
	  entrada[k] ='0' ;
	  datos[k]='0';
	  }

scanf("%s",datos);

longitud = strlen(datos);


if (longitud %3 ==0)
	 agregados=0;

if (longitud %3 ==1)
	 {
	 entrada[0] = '0';
	 entrada[1] = '0';
	 agregados = 2;
	 }
if (longitud %3 ==2)
	 {
	 entrada[0] = '0';
	 agregados =1;
	 }

for (k=0; k< longitud; k ++)
	 entrada[k+agregados]=datos[k];

longitud = longitud + agregados;


longitudbalin = longitud-1;

for (cifras =(longitud/3)-1; cifras >=0 ; cifras --)
{
azul[2] = entrada[ longitudbalin ];
azul[1] = entrada[ longitudbalin - 1 ];
azul[0] = entrada[ longitudbalin - 2 ];

if (azul[0] == '0' && azul[1]=='0' && azul[2]=='0')
	verde[cifras] = '0';

if (azul[0] == '0' && azul[1]=='0' && azul[2]=='1')
	verde[cifras] = '1';

if (azul[0] == '0' && azul[1]=='1' && azul[2]=='0')
	verde[cifras] = '2';

if (azul[0] == '0' && azul[1]=='1' && azul[2]=='1')
	verde[cifras] = '3';

if (azul[0] == '1' && azul[1]=='0' && azul[2]=='0')
	verde[cifras] = '4';

if (azul[0] == '1' && azul[1]=='0' && azul[2]=='1')
	verde[cifras] = '5';

if (azul[0] == '1' && azul[1]=='1' && azul[2]=='0')
	verde[cifras] = '6';

if (azul[0] == '1' && azul[1]=='1' && azul[2]=='1')
	verde[cifras] = '7';


longitudbalin = longitudbalin -3;

}

for (k=0; k< longitud/3; k++)
	  printf("%c",verde[k]);


 return 0;
}
