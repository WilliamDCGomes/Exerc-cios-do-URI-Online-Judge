#include <iostream>
using namespace std;
int main(){
    long long int a,b;
    while(cin>>a>>b){
        long long int numa=1,numb=1;
        for(int x=a;x>1;x--){
            numa*=x;
        }
        for(int x=b;x>1;x--){
            numb*=x;
        }
        cout<<numa+numb<<endl;
    }
    return 0;
}
