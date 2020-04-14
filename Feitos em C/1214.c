#include <stdio.h>
int main() {
    int a,i;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		int b,soma=0,quant=0,j;
		scanf("%d",&b);
		int t[b];
		for(j=0;j<b;j++){
			scanf("%d",&t[j]);
			soma += t[j];
		}
		int media = soma/b;
		for(j=0;j<b;j++){
			if(t[j]>media){
				quant++;
			}
		}
		double porc = (double) (quant*100)/b;
		printf("%.3f%%\n",porc);
	}
    return 0;
}
