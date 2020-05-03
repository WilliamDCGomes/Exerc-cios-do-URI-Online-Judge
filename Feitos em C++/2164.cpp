#include<iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
    double n1=(1+sqrt(5))/2,n2=(1-sqrt(5))/2;
	int n;
	cin>>n;
	double total= (pow(n1,n)-pow(n2,n))/sqrt(5);
	printf("%.1f\n",total);
    return 0;
}
