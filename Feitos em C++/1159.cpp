#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a,b=0,t=1,vezes=0;
    for(int z=1;z<=t;z++){
    	cin>>a;
    	if(a==0){
    		z=t+1;
		}
		else if(a%2==0){
			for(int x=0;x<5;x++){
				b+=a;
				if(vezes==4){
					cout<<b<<endl;
					vezes=0;
					b=0;
				}
				else{
					vezes++;
				}
				a+=2;
			}
		}
		else{
				a+=1;
				for(int x=0;x<5;x++){
				b+=a;
				if(vezes==4){
					cout<<b<<endl;
					vezes=0;
					b=0;
				}
				else{
					vezes++;
				}
				a+=2;
			}
		}
		t++;
	}
    return 0;
}
