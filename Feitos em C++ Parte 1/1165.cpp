#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    int vet[i],foi=0;
    for(int z=1;z<=i;z++){
    	cin>>vet[z];
    	for(int x=2;x<vet[z];x++){
    		if(vet[z]%x==0){
    			foi=1;
			}
		}
		if(foi==1){
			cout<<vet[z]<<" nao eh primo"<<endl;
		}
		else{
			cout<<vet[z]<<" eh primo"<<endl;
		}
		foi=0;
	}
    return 0;
}
