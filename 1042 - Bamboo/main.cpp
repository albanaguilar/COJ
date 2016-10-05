#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int testCases;
	double h, d, sum = 0, hB;
	cin >> testCases;
	float aux = testCases;

	do
	{
		if (testCases > 0)
		{
			cin >> h >>d;
			hB = ( ( (h * h) - (d * d) ) / (2 * h) );
			cout <<  fixed << setprecision(1) << hB << endl;
			sum += hB;
		}
		testCases = testCases - 1;
	}
	while(0 != testCases);
	cout << fixed << setprecision(1) << sum / aux << endl;

	return 0;
}
