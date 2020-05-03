#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
	int b=1;
    for(int a=60;a>=0;a-=5){
	    cout<<"I="<<b<<" J="<<a<<endl;
	    b+=3;
	}
    return 0;
}
