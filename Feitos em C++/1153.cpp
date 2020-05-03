#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a,b=1;
    cin>>a;
    for(int z=1;z<a;z++){
    	b*=(a-z);
	}
	b*=a;
	cout<<b<<endl;
    return 0;
}
