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
	int times,i;
	scanf("%d",&times);
	int vet[times],aux=-1;
	for(i=0;i<times;i++){
		scanf("%d",&vet[i]);
	}
	qsort(vet, times, sizeof(int), comp);
	for(i=0;i<times;i++){
		if(vet[i]%2==0&&vet[i]!=-1){
			printf("%d\n",vet[i]);
		}
	}
	for(i=times-1;i>=0;i--){
		if(vet[i]%2!=0&&vet[i]!=-1){
			printf("%d\n",vet[i]);
		}
	}
    return 0;
}
