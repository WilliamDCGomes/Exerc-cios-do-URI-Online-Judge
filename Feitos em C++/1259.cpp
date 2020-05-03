#include<bits/stdc++.h>
using namespace std;
int main() {
	int times;
	cin>>times;
	int vet[times],aux=-1;
	for(int i=0;i<times;i++){
		cin>>vet[i];
	}
	sort(vet, vet + times);
	for(int i=0;i<times;i++){
		if(vet[i]%2==0&&vet[i]!=-1){
			cout<<vet[i]<<endl;
		}
	}
	for(int i=times-1;i>=0;i--){
		if(vet[i]%2!=0&&vet[i]!=-1){
			cout<<vet[i]<<endl;
		}
	}
	return 0;
}
