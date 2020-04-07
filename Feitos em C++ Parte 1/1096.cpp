#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
	int b=1,cont=0;
	for(int z=0;z<5;z++){
	    for(int a=7;a>=5;a-=1){
		    cout<<"I="<<b<<" J="<<a<<endl;
		    cont++;
		    if(cont==3){
		    b+=2;
		    cont=0;
	     	}
		}
	}
    return 0;
}
