#include <stdio.h>
int main() {
	int pedidos[3],refeicoes[3],faltou=0,i;
	scanf("%d",&refeicoes[0]);
	scanf("%d",&refeicoes[1]);
	scanf("%d",&refeicoes[2]);
	scanf("%d",&pedidos[0]);
	scanf("%d",&pedidos[1]);
	scanf("%d",&pedidos[2]);
	for(i=0;i<3;i++){
		if(pedidos[i]>refeicoes[i]){
			faltou+=(pedidos[i]-refeicoes[i]);
		}
	}
	printf("%d\n",faltou);
	return 0;
}
