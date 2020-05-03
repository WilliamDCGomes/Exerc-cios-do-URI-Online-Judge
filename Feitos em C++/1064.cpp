#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    double a[6],cont=0,cont2=0,cont3=0,cont4=0,n;
    for(int b=0;b<6;b++){
        cin>>a[b];
    }
    for(int b=0;b<6;b++){
        if(a[b]>0){
        	cont++;
        	n+=a[b];
		}
    }
    n=n/cont;
    cout<<cont<<" valores positivos"<<endl;
    printf("%.1f\n",n);
    return 0;
}
