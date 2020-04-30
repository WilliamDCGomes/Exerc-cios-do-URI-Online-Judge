#include <stdio.h>
int main() {
	char caracters[27];
	while(scanf("%s",&caracters)==1){
		int lamps;
		scanf("%d",&lamps);
		int onLamps,i;
		for(i=0;i<lamps;i++){
			scanf("%d",&onLamps);
			printf("%c",caracters[onLamps-1]);
		}
		printf("\n");
	}
    return 0;
}
