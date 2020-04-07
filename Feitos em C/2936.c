#include <stdio.h>
int main(){
    int vet[5],x;
	for(x=0;x<5;x++){
		scanf("%d",&vet[x]);
	}
	int tot=((300*vet[0])+(1500*vet[1])+(600*vet[2])+(1000*vet[3])+(150*vet[4]))+225;
	printf("%d\n",tot);
    return 0;
}
