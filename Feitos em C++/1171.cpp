#include<bits/stdc++.h>
using namespace std;
int main() {
	int many;
	cin>>many;
	int vet[many],aux[many],aux2[many];
	for(int i=0;i<many;i++){
		cin>>vet[i];
	}
	int times=0;
	while(times<many){
		int comp=2001,ref;
		for(int i=0;i<many;i++){
			if(comp>vet[i]&&vet[i]>0){
				comp=vet[i];
				ref=i;
			}
		}
		vet[ref]=0;
		aux[times]=comp;
		aux2[times]=comp;
		times++;
	}
	int request=0;
	for(int i=0;i<many;i++){
		for(int j=0;j<many;j++){
			if(aux[i]==aux2[j]){
				request++;
			}
		}
		if(i>0&&aux[i]==aux[i-1]){
			request=0;
			continue;
		}
		printf("%d aparece %d vez(es)\n",aux[i],request);
		request=0;
	}
	return 0;
}
