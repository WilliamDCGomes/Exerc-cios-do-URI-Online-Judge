#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a,b,soma=0;
    cin>>a>>b;
    if(a>b){
    	for(int c=b;c<=a;c++){
    		int ver=0;
    		ver=c%13;
    		if(ver!=0){
    			soma+=c;
			}
		}
	}
	else if(a<b){
    	for(int c=a;c<=b;c++){
    		int ver=0;
    		ver=c%13;
    		if(ver!=0){
    			soma+=c;
			}
		}
	}
	cout<<soma<<endl;
    return 0;
}
