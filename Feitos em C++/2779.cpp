#include<bits/stdc++.h>
using namespace std;
int main() {
	int pictures,buy,cont=0;
	cin>>pictures>>buy;
	int vet[buy],memo[buy];
	for(int i=0;i<buy;i++){
		cin>>vet[i];
		memo[i]=vet[i];
	}
	for(int i=0;i<buy;i++){
		for(int j=i+1;j<buy;j++){
			if(vet[i]==memo[j]&&memo[j]!=-1){
				memo[j]=-1;
			}
		}
	}
	for(int i=0;i<buy;i++){
		if(memo[i]!=-1){
			cont++;
		}
	}
	cout<<pictures-cont<<endl;
	return 0;
}
