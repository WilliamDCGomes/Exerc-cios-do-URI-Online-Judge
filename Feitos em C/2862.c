#include <stdio.h>
int main() {
	int a,x;
	scanf("%d",&a);
    for(x=0;x<a;x++){
    	int b;
    	scanf("%d",&b);
    	if(b>8000){
    		printf("Mais de 8000!\n");
		}
		else{
			printf("Inseto!\n");
		}
	}
    return 0;
}
