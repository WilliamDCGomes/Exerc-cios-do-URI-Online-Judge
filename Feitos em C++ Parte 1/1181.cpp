#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    double m[12][12],soma=0;
	int n=0,linha;
    char op;
	cin >> linha;
	cin >> op;
    for(int i=0;i<12;i++){
	    for(int j=0;j<12;j++){
	        cin>>m[i][j];
	    }
	}
    for(int j=0;j<12;j++){
        soma+=m[linha][j];
    }
    if(op=='S'){
		printf("%.1f\n",soma);
    }
    else {
        printf("%.1f\n",soma/12);
    }
    return 0;
}
