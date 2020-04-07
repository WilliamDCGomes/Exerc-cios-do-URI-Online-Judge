#include <stdio.h>
int main(){
    int ent,x;
    scanf("%d",&ent);
	int vet[ent];
	for(x=0;x<ent;x++){
	    scanf("%d",&vet[x]);
	}
	int igual=0,maior=0;
	for(x=1;x<ent;x++){
		if(vet[0]==vet[x]){
			igual++;
		}
	}
	if(igual==ent+1){
	    printf("S\n");
	}
	else{
		for(x=1;x<ent;x++){
			if(vet[0]<vet[x]){
				maior++;
			}
		}
		if(maior!=0){
			printf("N\n");
		}
		else{
			printf("S\n");
		}
	}
    return 0;
}
