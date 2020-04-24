#include <stdio.h>
int main() {
	int times,i,j;
	scanf("%d",&times);
	for(i=0;i<times;i++){
		char a[1000],b[1000];
		for(j=0;j<1000;j++){
			a[j]=65;
			b[j]=65;
		}
		scanf("%s %s",&a,&b);
		int sizeA = strlen(a), sizeB = strlen(b),cont=0,auxB=sizeB;
		for(j=sizeA-1;j>=(sizeA-1)-(sizeB-1);j--){
			if(a[j]==b[auxB-1]){
				cont++;
			}
			auxB--;
		}
		if(cont==strlen(b)){
			printf("encaixa\n");
		}
		else{
			printf("nao encaixa\n");
		}
	}
    return 0;
}
