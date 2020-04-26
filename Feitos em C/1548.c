#include <stdio.h>
#include <stdlib.h>
int comp(const void * a,const void * b){
	if(*(int*)a==*(int*)b){
		return 0;
	}
	else if(*(int*)a<*(int*)b){
		return -1;
	}
	else{
		return 1;
	}
}
int main() {
	int times,j,i;
	scanf("%d",&times);
	for(i=0;i<times;i++){
		int many;
		scanf("%d",&many);
		int vet[many],aux[many];
		for(j=0;j<many;j++){
			scanf("%d",&vet[j]);
			aux[j]=vet[j];
		}
		qsort(vet, many, sizeof(int), comp);
		int dontMove=0;
		int manyAux=many-1;
		for(j=0;j<many;j++){
			if(aux[j]==vet[manyAux]){
				dontMove++;
			}
			manyAux--;
		}
		printf("%d\n",dontMove);
	}
    return 0;
}
