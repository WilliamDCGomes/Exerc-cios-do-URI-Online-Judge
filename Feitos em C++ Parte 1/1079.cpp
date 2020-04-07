#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    double vet[i][3],media=0,vez=1;
    for(int a=0;a<i;a++){
	    for(int b=0;b<3;b++){
	    	cin>>vet[a][b];
		}
	}
	for(int a=0;a<i;a++){
	    for(int b=0;b<3;b++){
	    	if(vez==1){
	    		media+=(vet[a][b]*0.2);
			}
			else if(vez==2){
	    		media+=(vet[a][b]*0.3);
			}
			else{
	    		media+=(vet[a][b]*0.5);
			}
			vez++;
		}
		printf("%.1f\n",media);
		vez=1;
		media=0;
	}
    return 0;
}
