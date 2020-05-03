#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
	int quant;	
	cin>>quant;
	double pri[quant],sec[quant],div;
	for(int i =0;i<quant;i++){
		cin>>pri[i]>>sec[i];
	}
	for(int i=0;i<quant;i++){
		if(sec[i]==0){
			cout<<"divisao impossivel"<<endl;
		}
		else{
			div=pri[i]/sec[i];
			printf("%.1f\n",div);
		}
	}
	return 0;
}
