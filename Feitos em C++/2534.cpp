#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,q;
	while(cin>>n>>q){
		int vet[n],aux[n];
		for(int i=0;i<n;i++){
			cin>>vet[i];
		}
		int aux2;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(vet[i]<vet[j]){
					aux2=vet[i];
					vet[i]=vet[j];
					vet[j]=aux2;
				}
			}
		}
		for(int i=0;i<q;i++){
			int p;
			cin>>p;
			cout<<vet[p-1]<<endl;
		}
	}
	return 0;
}
