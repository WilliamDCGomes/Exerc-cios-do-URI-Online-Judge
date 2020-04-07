#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a,v;
    cin>>a;
    for(int z=1;z<=a;z++){
    	v=a%z;
    	if(v==0){
    		cout<<z<<endl;
		}
	}
    return 0;
}
