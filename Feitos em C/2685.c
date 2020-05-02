#include <stdio.h>
int main() {
	int x;
	while(scanf("%d",&x)==1){
		if((x>=0&&x<90)||x==360){
			printf("Bom Dia!!\n");
		}
		else if(x>=90&&x<180){
			printf("Boa Tarde!!\n");
		}
		else if(x>=180&&x<270){
			printf("Boa Noite!!\n");
		}
		else{
			printf("De Madrugada!!\n");
		}
	}
    return 0;
}
