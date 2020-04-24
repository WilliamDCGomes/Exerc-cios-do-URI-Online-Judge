#include <stdio.h>
int main() {
	int pictures,buy,cont=0,i,j;
	scanf("%d %d",&pictures,&buy);
	int vet[buy],memo[buy];
	for(i=0;i<buy;i++){
		scanf("%d",&vet[i]);
		memo[i]=vet[i];
	}
	for(i=0;i<buy;i++){
		for(j=i+1;j<buy;j++){
			if(vet[i]==memo[j]&&memo[j]!=-1){
				memo[j]=-1;
			}
		}
	}
	for(i=0;i<buy;i++){
		if(memo[i]!=-1){
			cont++;
		}
	}
	printf("%d\n",pictures-cont);
    return 0;
}
