#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
		int b,soma=0,quant=0;
		cin>>b;
		int t[b];
		for(int j=0;j<b;j++){
			cin>>t[j];
			soma += t[j];
		}
		int media = soma/b;
		for(int j=0;j<b;j++){
			if(t[j]>media){
				quant++;
			}
		}
		double porc = (double) (quant*100)/b;
		printf("%.3f%\n",porc);
	}
	return 0;
}
