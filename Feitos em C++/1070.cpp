#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int i,ver;
    cin>>i;
    ver=i%2;
    if(ver==0){
    	for(int b=0;b<6;b++){
	        cout<<i+1<<endl;
	        i+=2;
	    }
	}
	else{
		for(int b=0;b<6;b++){
	        cout<<i+2<<endl;
	        i++;
	    }
	}
    return 0;
}
