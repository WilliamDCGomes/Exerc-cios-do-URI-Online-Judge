#include <stdio.h>
int main() {
	char word[101];
	while(scanf("%s",&word)==1){
		int times = strlen(word);
		int aux =times;
		int aux2=0;
		int i,j,z;
		for(i=0;i<times;i++){
			for(j=0;j<aux;j++){
				if(j==0){
					for(z=0;z<aux2;z++){
						printf(" ");
					}
				}
				if(j==aux-1){
					printf("%c",word[j]);
				}
				else{
					printf("%c ",word[j]);
				}
			}
			printf("\n");
			aux--;
			aux2++;
		}
		printf("\n");
	}
    return 0;
}
