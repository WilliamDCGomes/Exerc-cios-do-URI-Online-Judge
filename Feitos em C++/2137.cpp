#include<bits/stdc++.h>
using namespace std;
int main() {
	int times;
	while(cin>>times){
		int vet[times],aux;
		for(int i=0;i<times;i++){
			cin>>vet[i];
		}
		for(int i=0;i<times;i++){
			for(int j=i+1;j<times;j++){
				if(vet[i]>vet[j]){
					aux=vet[i];
					vet[i]=vet[j];
					vet[j]=aux;
				}
			}
		}
		int auxVet[times];
		for(int i=0;i<times;i++){
			int size=0;
			auxVet[i]=vet[i];
			while(auxVet[i]>0){
				auxVet[i]/=10;
				size++;
			}
			if(size==1){
				cout<<"000"<<vet[i]<<endl;
			}
			else if(size==2){
				cout<<"00"<<vet[i]<<endl;
			}
			else if(size==3){
				cout<<"0"<<vet[i]<<endl;
			}
			else if(vet[i]==0){
				cout<<"0000"<<endl;
			}
			else{
				cout<<vet[i]<<endl;
			}
		}
	}
	return 0;
}
