#include <stdio.h>
int main() {
	int times,i,j;
	scanf("%d",&times);
	for(i=0;i<times;i++){
		int quantJoao=0,quantMaria=0;
		for(j=0;j<3;j++){
			int x,d;
			scanf("%d %d",&x,&d);
			quantJoao+=(x*d);
		}
		for(j=0;j<3;j++){
			int x,d;
			scanf("%d %d",&x,&d);
			quantMaria+=(x*d);
		}
		if(quantJoao>quantMaria){
			printf("JOAO\n");
		}
		else{
			printf("MARIA\n");
		}
	}
    return 0;
}
