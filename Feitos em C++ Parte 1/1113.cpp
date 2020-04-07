#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a,b,q=1;
    for(int z=1;z<=q;z++){
    	cin>>a>>b;
    	if(a==b){
    		z=q+1;
		}
		else if(a>b){
			cout<<"Decrescente"<<endl;
		}
		else{
			cout<<"Crescente"<<endl;
		}
		q++;
	}
    return 0;
}
