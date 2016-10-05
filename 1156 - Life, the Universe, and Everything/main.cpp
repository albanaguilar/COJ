#include <stdio.h>
int main()
{
	int i=0;

	while(1)
	{
		if(i>0)
			printf("\n");
		int a;
		scanf("%d",&a);
		if(a==42)
			break;
		else
			printf("%d",a);
		i++;
	}
    return 0;
}

/*#include <iostream>
#include <vector>

using namespace std;

int main()
{
     vector<int> my_vector;
    int x, i = 0, counter = 1;

    while (true)
    {
        cin >> x;
        if (x == 42)
        {
            break;
        }
        else
        {
            my_vector.push_back(x);
            counter++;
        }
    }

    for (i = 0; i < counter - 1; i++)
    {
        cout  <<my_vector[i] <<endl;
    }*/

    /*int n;
    while(true)
    {
        cin >> n;
        if (n == 42)
        {
            break;
        }
        else
        {
            cout << n <<endl;
        }

    }



    return 0;
}
*/
