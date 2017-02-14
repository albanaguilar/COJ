#include <iostream>
#include <string>
using namespace std;

int main(){
    string sLinea;
    int iNum;
    cin >> iNum;

    cin.ignore();
    while (iNum--){
        getline(cin, sLinea);
        for (int i = 0; i < 2; i++ ){
            cout << sLinea[i];
        }
        for (int j = sLinea.length() - 1; j >= 4; j-- ){
            if (sLinea[j] == ' '){
                for (int k = j + 1; ;k++){
                    if (sLinea[k] == '\0' || sLinea[k] == ' '){
                        break;
                    }
                    else{
                        cout << sLinea[k];
                    }
                }
                if(j!=4) cout << "*";
            }
        }
        for (int i = 2; i < 4; i++ ){
            cout << sLinea[i];
        }
    cout << endl;
    }

    return 0;
}





