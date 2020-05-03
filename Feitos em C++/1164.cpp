#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    int vet[i],foi=0,soma=0;
    for(int z=1;z<=i;z++){
    	cin>>vet[z];
	}
	for(int z=1;z<=i;z++){
    	for(int a=1;a<vet[z];a++){
    		if(vet[z]%a==0){
    			soma+=a;
			}
		}
		if(soma==vet[z]){
			cout<<soma<<" eh perfeito"<<endl;
		}
		else{
			cout<<vet[z]<<" nao eh perfeito"<<endl;
		}
		soma=0;
	}
    return 0;
}
