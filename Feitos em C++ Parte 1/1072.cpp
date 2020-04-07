#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    int vet[i],in=0,out=0;
    for(int j=0;j<i;j++){
    	cin>>vet[j];
	}
	for(int j=0;j<i;j++){
    	if(vet[j]>=10&&vet[j]<=20){
    		in++;
		}
		else{
			out++;
		}
	}
	cout<<in<<" in"<<endl;
	cout<<out<<" out"<<endl;
    return 0;
}
