#include <stdio.h>
int main() {
	int n,q,i,j;
	while(scanf("%d",&n)==1){
		scanf("%d",&q);
		int vet[n],aux[n];
		for(i=0;i<n;i++){
			scanf("%d",&vet[i]);
		}
		int aux2;
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(vet[i]<vet[j]){
					aux2=vet[i];
					vet[i]=vet[j];
					vet[j]=aux2;
				}
			}
		}
		for(i=0;i<q;i++){
			int p;
			scanf("%d",&p);
			printf("%d\n",vet[p-1]);
		}
	}
    return 0;
}
