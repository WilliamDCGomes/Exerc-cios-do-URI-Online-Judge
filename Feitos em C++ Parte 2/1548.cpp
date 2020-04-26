#include<bits/stdc++.h>
using namespace std;
int main() {
	int times;
	cin>>times;
	for(int i=0;i<times;i++){
		int many;
		cin>>many;
		int vet[many],aux[many];
		for(int j=0;j<many;j++){
			cin>>vet[j];
			aux[j]=vet[j];
		}
		sort(vet, vet + many);
		int dontMove=0;
		int manyAux=many-1;
		for(int j=0;j<many;j++){
			if(aux[j]==vet[manyAux]){
				dontMove++;
			}
			manyAux--;
		}
		cout<<dontMove<<endl;
	}
	return 0;
}
