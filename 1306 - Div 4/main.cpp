#include <iostream>
using namespace std;
int main() {
  int T,mem;
  char number[101];
  cin>>T;
  for(int x=0; x<101; x++) number[x]='\0';
  cin>>number;
  for(int x=0;x<T;x++) {
    for(int x=0; x<101; x++) if(number[x]=='\0') {
      mem=number[x-1]+10*number[x-2];
      break;
    }
    if(mem%4==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    for(int x=0; x<101; x++) number[x]='\0';
    cin>>number;
  }
}
