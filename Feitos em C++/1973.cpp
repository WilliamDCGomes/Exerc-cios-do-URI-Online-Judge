#include<bits/stdc++.h>
using namespace std;
int main() {
	int input;
	cin>>input;
	int vet[input],tot=0;
	bool check[input];
	for(int i=0;i<input;i++){
		cin>>vet[i];
		check[i]=false;
		tot+=vet[i];
	}
	int pos=0,roubou=0;
	while(true){
		if(pos>=0&&pos<input&&vet[pos]!=0){
			if(vet[pos]%2==0){
				check[pos]=true;
				vet[pos]--;
				pos--;
				roubou++;
			}
			else{
				check[pos]=true;
				vet[pos]--;
				pos++;
				roubou++;
			}
		}
		else{
			break;
		}
	}
	int cont=0;
	for(int i=0;i<input;i++){
		if(check[i]==true){
			cont++;
		}
	}
	cout<<cont<<" "<<tot-roubou;
	return 0;
}
