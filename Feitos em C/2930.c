#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
	if(a>b){
		printf("Eu odeio a professora!\n");
	}
	else if(b-3>=a){
		printf("Muito bem! Apresenta antes do Natal!\n");
	}
	else{
		printf("Parece o trabalho do meu filho!\n");
		if(b+2<=24){
			printf("TCC Apresentado!\n");
		}
		else{
			printf("Fail! Entao eh nataaaaal!\n");
		}
	}
    return 0;
}
