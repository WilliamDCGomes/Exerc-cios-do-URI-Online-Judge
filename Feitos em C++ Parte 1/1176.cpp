#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int b;
    cin>>b;
    long long int vet[b],aux[b],det[b],k=0;
    for(int z=0;z<b;z++){
    	cin>>vet[z];
    	aux[z]=vet[z];
	}
    det[0]=0;
	det[1]=1;
	for(int z=0;z<b;z++){
    	if(vet[z]==0||vet[z]==1){
    		cout<<"Fib("<<aux[z]<<") = "<<vet[z]<<endl;
		}
		else{
			long long int vete[61];
		    for(int a=0;a<61;a++){
		    	vete[a]=0;
			}
			vete[1]=1;
			for(int a=2;a<61;a++){
		    	vete[a]=vete[a-1]+vete[a-2];
			}
			cout<<"Fib("<<aux[z]<<") = "<<vete[vet[z]]<<endl;
		}
	}
	return 0;
}
