#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
	double s=1,i,t=2;
	for(i=3;i<=39;i+=2){
		s+=(i/t);
		t*=2;
	}
	printf("%.2f\n",s);
	return 0;
}
