#include <stdio.h>
int main() {
	int times,i,j;
	while(scanf("%d",&times)==1){
		int vet[times],aux;
		for(i=0;i<times;i++){
			scanf("%d",&vet[i]);
		}
		for(i=0;i<times;i++){
			for(j=i+1;j<times;j++){
				if(vet[i]>vet[j]){
					aux=vet[i];
					vet[i]=vet[j];
					vet[j]=aux;
				}
			}
		}
		int auxVet[times];
		for(i=0;i<times;i++){
			int size=0;
			auxVet[i]=vet[i];
			while(auxVet[i]>0){
				auxVet[i]/=10;
				size++;
			}
			if(size==1){
				printf("000%d\n",vet[i]);
			}
			else if(size==2){
				printf("00%d\n",vet[i]);
			}
			else if(size==3){
				printf("0%d\n",vet[i]);
			}
			else if(vet[i]==0){
				printf("0000\n");
			}
			else{
				printf("%d\n",vet[i]);
			}
		}
	}
    return 0;
}
