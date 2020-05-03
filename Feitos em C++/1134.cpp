#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a,q=1,conta=0,contb=0,contc=0;
    for(int z=1;z<=q;z++){
    	cin>>a;
    	if(a==4){
    		z=q+1;
		}
		else if(a==1){
			conta++;
			q++;
		}
		else if(a==2){
			contb++;
			q++;
		}
		else if(a==3){
			contc++;
			q++;
		}
		else{
			q++;
		}
	}
	cout<<"MUITO OBRIGADO\nAlcool: "<<conta<<"\nGasolina: "<<contb<<"\nDiesel: "<<contc<<endl;
    return 0;
}
