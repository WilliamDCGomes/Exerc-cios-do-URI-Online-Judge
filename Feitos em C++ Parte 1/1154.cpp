#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a,q=1;
    double media=0.0,soma=0.0,t=0.0;
    for(int z=1;z<=q;z++){
    	cin>>a;
    	if(a<0){
    		z=q+1;
		}
    	else{
    		soma+=a;
    		t++;
		}
		q++;
	}
	media=soma/t;
	printf("%.2f\n",media);
    return 0;
}
