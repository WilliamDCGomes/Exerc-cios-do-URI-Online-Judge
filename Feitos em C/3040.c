#include <stdio.h>
int main() {
    int h,d,g,casos,i;
    scanf("%d",&casos);
	for(i=0;i<casos;i++){
		scanf("%d",&h);
		scanf("%d",&d);
		scanf("%d",&g);
		if(h>=200&&h<=300){
			if(d>=50){
				if(g>=150){
					printf("Sim\n");
				}
				else{
					printf("Nao\n");
				}
			}
			else{
				printf("Nao\n");
			}
		}
		else{
			printf("Nao\n");
		}
	}
    return 0;
}
