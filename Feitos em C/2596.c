#include <stdio.h>
int main() {
	int quant,i;
	scanf("%d",&quant);
	for(i=0;i<quant;i++){
		int esfera,pegaEsfera=0,j,z;
		scanf("%d",&esfera);
		for(j=esfera;j>0;j--){
			int divisores=0;
			for(z=j;z>0;z--){
				if(j%z==0){
					divisores++;
				}
			}
			if(divisores%2==0){
				pegaEsfera++;
			}
		}
		printf("%d\n",pegaEsfera);
	}
	return 0;
}
