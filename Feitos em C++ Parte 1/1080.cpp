#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int vet[100],compara,conta=1;
    for(int a=1;a<=100;a++){
	    cin>>vet[a];
	}
	compara=vet[1];
	for(int a=2;a<=100;a++){
	    if(compara<vet[a]){
	    	compara=vet[a];
	    	conta=a;
		}
	}
	cout<<compara<<endl;
	cout<<conta<<endl;
    return 0;
}
