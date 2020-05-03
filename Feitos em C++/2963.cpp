#include<bits/stdc++.h>
using namespace std;
int main(){
	int ent;
	cin>>ent;
	int vet[ent];
	for(int x=0;x<ent;x++){
		cin>>vet[x];
	}
	int igual=0,maior=0;
	for(int x=1;x<ent;x++){
		if(vet[0]==vet[x]){
			igual++;
		}
	}
	if(igual==ent+1){
		cout<<"S"<<endl;
	}
	else{
		for(int x=1;x<ent;x++){
			if(vet[0]<vet[x]){
				maior++;
			}
		}
		if(maior!=0){
			cout<<"N"<<endl;
		}
		else{
			cout<<"S"<<endl;
		}
	}
	return 0;
}
