#include <stdio.h>
int main() {
	int many,i,j;
	scanf("%d",&many);
	int vet[many],aux[many],aux2[many];
	for(i=0;i<many;i++){
		scanf("%d",&vet[i]);
	}
	int times=0;
	while(times<many){
		int comp=2001,ref;
		for(i=0;i<many;i++){
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
	for(i=0;i<many;i++){
		for(j=0;j<many;j++){
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
