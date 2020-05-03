#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    double nota1,nota2,q=1,media=0.0;
    for(int a=1;a<=q;a++){
    	cin>>nota1;
    	if(nota1<0||nota1>10){
    		cout<<"nota invalida"<<endl;
    		q++;
		}
		else{
			a=q+1;
		}
	}
	for(int a=1;a<=q;a++){
    	cin>>nota2;
    	if(nota2<0||nota2>10){
    		cout<<"nota invalida"<<endl;
    		q++;
		}
		else{
			a=q+1;
		}
	}
	media=(nota1+nota2)/2;
	printf("media = %.2f\n",media);
    return 0;
}
