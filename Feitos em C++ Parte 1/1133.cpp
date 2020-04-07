#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a,b,soma=0;
    cin>>a>>b;
    if(a>b){
    	for(int c=b+1;c<a;c++){
    		int ver=0;
    		ver=c%5;
    		if(ver==2||ver==3){
    			cout<<c<<endl;
			}
		}
	}
	else if(a<b){
    	for(int c=a+1;c<b;c++){
    		int ver=0;
    		ver=c%5;
    		if(ver==2||ver==3){
    			cout<<c<<endl;
			}
		}
	}
    return 0;
}
