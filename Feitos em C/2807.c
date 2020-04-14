#include <stdio.h>
int main() {
    int vet[46],num,cont=0,a;
    for(a=0;a<46;a++){
    	vet[a]=0;
	}
	vet[1]=1;
	for(a=2;a<46;a++){
    	vet[a]=vet[a-1]+vet[a-2];
	}
	scanf("%d",&num);
	for(a=num;a>0;a--){
		if(a>1){
			printf("%d ",vet[a]);
		}
		else{
			printf("%d\n",vet[a]);
		}
		cont++;
	}
    return 0;
}
