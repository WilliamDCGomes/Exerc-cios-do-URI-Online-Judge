#include<bits/stdc++.h>
using namespace std;
int main() {
	int times;
	cin>>times;
	for(int i=0;i<times;i++){
		char a[1000],b[1000];
		for(int j=0;j<1000;j++){
			a[j]=65;
			b[j]=65;
		}
		cin>>a>>b;
		int sizeA = strlen(a), sizeB = strlen(b),cont=0,auxB=sizeB;
		for(int j=sizeA-1;j>=(sizeA-1)-(sizeB-1);j--){
			if(a[j]==b[auxB-1]){
				cont++;
			}
			auxB--;
		}
		if(cont==strlen(b)){
			cout<<"encaixa"<<endl;
		}
		else{
			cout<<"nao encaixa"<<endl;
		}
	}
	return 0;
}
