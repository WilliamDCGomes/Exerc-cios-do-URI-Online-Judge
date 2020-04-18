#include <stdio.h>
int main() {
	int quant,i;
	while(2>1){
		scanf("%d",&quant);
		if(quant==0){
			break;
		}
		int dX,dY;
		scanf("%d",&dX);
		scanf("%d",&dY);
		for(i=0;i<quant;i++){
			int x,y;
			scanf("%d",&x);
			scanf("%d",&y);
			if(x==dX||y==dY){
				printf("divisa\n");
			}
			else if(x>dX&&y>dY){
				printf("NE\n");
			}
			else if(x<dX&&y>dY){
				printf("NO\n");
			}
			else if(x<dX&&y<dY){
				printf("SO\n");
			}
			else if(x>dX&&y<dY){
				printf("SE\n");
			}
		}
	}
    return 0;
}
