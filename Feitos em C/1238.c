#include <stdio.h>
int main() {
	int times, i, j;
	scanf("%d",&times);
	for(i=0;i<times;i++){
		char word1[50],word2[50];
		for(j=0;j<50;j++){
			word1[j]=48;
			word2[j]=48;
		}
		scanf("%s %s",&word1,&word2);
		for(j=0;j<50;j++){
			if(word1[j]==0){
				word1[j]=48;
			}
			if(word2[j]==0){
				word2[j]=48;
			}
		}
		for(j=0;j<50;j++){
			if(word1[j]!=48){
				printf("%c",word1[j]);
			}
			if(word2[j]!=48){
				printf("%c",word2[j]);
			}
		}
		printf("\n");
	}
    return 0;
}
