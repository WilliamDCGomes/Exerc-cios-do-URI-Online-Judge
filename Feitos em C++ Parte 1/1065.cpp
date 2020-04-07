#include <iostream>
using namespace std;
int main(){
    int a[5];
    int cont=0;
    for(int b=0;b<5;b++){
        cin>>a[b];
    }
    for(int b=0;b<5;b++){
        if(a[b]%2==0){
        	cont++;
		}
    }
    cout<<cont<<" valores pares"<<endl;
    return 0;
}
