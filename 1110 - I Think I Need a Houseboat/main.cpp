#include <iostream>
#include <cmath>

using namespace std;

int main(){
	//n cases
	//x  and y coordinates
	int n;
	double x,y, radius;
	int value;
	cin >> n;
	for(int i=0; i < n; i++){
		cin >> x >> y;
		radius = sqrt(pow(x,2) + pow(y,2));
		value = floor(3.14 * pow(radius,2) / 100 + 1);
		cout << "Property " << i+1 << ":" << " This property will begin eroding in year "  << value << "." << endl;
	}

	cout << "END OF OUTPUT.";
    cout << endl;

}
