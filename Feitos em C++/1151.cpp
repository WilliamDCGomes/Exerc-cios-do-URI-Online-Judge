#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int vet[46],num,cont=0;
    for(int a=0;a<46;a++){
    	vet[a]=0;
	}
	vet[1]=1;
	for(int a=2;a<46;a++){
    	vet[a]=vet[a-1]+vet[a-2];
	}
	cin>>num;
	for(int a=0;a<num;a++){
		if(cont<num-1){
			cout<<vet[a]<<" ";
		}
		else{
			cout<<vet[a]<<endl;
		}
		cont++;
	}
	return 0;
}
