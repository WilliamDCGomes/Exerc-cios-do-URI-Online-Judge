#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    for(int a=1;a<=10000;a++){
	    if(a%i==2)
			cout<<a<<endl;
	}	
    return 0;
}
