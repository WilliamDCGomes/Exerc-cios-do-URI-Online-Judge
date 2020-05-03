#include <iostream>
using namespace std;
int main(){
    double a[6];
    int cont=0;
    for(int b=0;b<6;b++){
        cin>>a[b];
    }
    for(int b=0;b<6;b++){
        if(a[b]>0){
        	cont++;
		}
    }
    cout<<cont<<" valores positivos"<<endl;
    return 0;
}
