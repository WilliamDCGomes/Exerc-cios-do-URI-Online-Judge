#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int repetir=0,quanto=0,quantoaux=0;
    cin>>repetir;
    for(quanto=2;quanto<=repetir;quanto+=2){
		quantoaux=quanto*quanto;
    	printf("%d^2 = %d\n",quanto,quantoaux);
	}
    return 0;
}
