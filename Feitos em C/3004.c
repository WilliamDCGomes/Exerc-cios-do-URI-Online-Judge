#include <stdio.h>
int main() {
	int times,i;
	scanf("%d",&times);
	for(i=0;i<times;i++){
		int insideX,insideY,mainX,mainY;
		scanf("%d %d %d %d",&insideX,&insideY,&mainX,&mainY);
		if((insideX<mainX&&insideY<mainY)||(insideX<mainY&&insideY<mainX)){
			printf("S\n");
		}
		else{
			printf("N\n");
		}
	}
    return 0;
}
