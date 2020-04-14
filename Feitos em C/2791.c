#include <stdio.h>
int main() {
    int vet[4],x;
    for(x=0;x<4;x++){
    	scanf("%d",&vet[x]);
    	if(vet[x]==1){
    		printf("%d\n",x+1);
		}
	}
    return 0;
}
