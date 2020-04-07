#include <stdio.h>
int main(){
    int voltas,placas,x;
	float dist;
	scanf("%d",&voltas);
	scanf("%d",&placas);
	dist=voltas*placas;
	for(x=0;x<9;x++){
		float aux=((x+1)*dist)/10;
		int aux2=aux;
		if(aux>aux2&&x!=8){
		    printf("%d ",aux2+1);
		}
		else if(x!=8){
			printf("%d ",aux2);
		}
		else if(aux>aux2&&x==8){
			printf("%d\n",aux2+1);
		}
		else{
			printf("%d\n",aux2);
		}
	}
    return 0;
}
