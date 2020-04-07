#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
	int x=0,y,cont=1;
	cin>>x>>y;
	if(y==0){
		cout<<y;
	}
	else{
		for(int i=1;i<=y;i++){
			if(cont<x){
			cout<<i<<" ";
		}
		else{
			cout<<i;
		}
			if(cont==x){
				cout<<"\n";
				cont=0;
			}
			cont++;
		}
	}
    return 0;
}
