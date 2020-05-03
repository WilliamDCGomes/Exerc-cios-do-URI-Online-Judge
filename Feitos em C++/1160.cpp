#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a=0;
    cin>>a;
    int pa[a],pb[a],cont=0;
    double g1[a],g2[a],conta=0.0,contb=0.0;
    for(int z=0;z<a;z++){
    	cin>>pa[z]>>pb[z]>>g1[z]>>g2[z];
	}
	for(int z=0;z<a;z++){
    	while(pa[z]<=pb[z]){
    		conta=pa[z]*(g1[z]/100);
    		contb=pb[z]*(g2[z]/100);
    		pa[z]+=conta;
    		pb[z]+=contb;
    		cont++;
    		if(cont==101){
    			pa[z]=pb[z]+1;
			}
		}
		if(cont>100){
			cout<<"Mais de 1 seculo."<<endl;
		}
		else{
			cout<<cont<<" anos."<<endl;
		}
		cont=0;
	}
    return 0;
}
