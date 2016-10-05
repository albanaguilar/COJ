#include  <iostream>
#include <cmath>
using namespace std;

int main(){
    unsigned long long i,j,k;
    while(1){
        cin >> i;
        if(i== 0){
            break;
        }
        cin >> j >> k;
        i *= i;
        j *= j;
        k *= k;

        if((i+j) == k){
            cout << "right" << endl;
        }else if((j+k)== i){
            cout << "right" << endl;
        }else if((i+k)== j){
            cout << "right" << endl;
        }else{
            cout << "wrong"<< endl;
        }
    }
    return 0;
}
