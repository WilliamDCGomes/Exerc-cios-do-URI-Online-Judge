#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int a,x,z;
	scanf("%d",&a);
	for(x=0;x<a;x++){
		char aux[10];
		scanf("%s",&aux);
		int tam=strlen(aux);
		int z1=0;
		char aux2[(tam-1)/2],aux3[(tam-1)/2];
		for(z=0;z<tam;z++){
			aux2[z]=0;
			aux3[z]=0;
		}
		for(z=0;z<tam;z++){
			if(aux[z]=='x'){
				break;
			}
			else{
				aux2[z1]=aux[z];
				z1++;
			}
		}
		int vai=0,z2=0;
		for(z=0;z<tam;z++){
			if(aux[z]=='x'){
				vai++;
			}
			else if(vai>0){
				aux3[z2]=aux[z];
				z2++;
			}
		}
		int i = atoi(aux2);
		int j = atoi(aux3);
		if(i!=j){
			for(z=5;z<11;z++){
				printf("%d x %d = %d && %d x %d = %d\n",i,z,i*z,j,z,j*z);
			}
		}
		else{
			for(z=5;z<11;z++){
				printf("%d x %d = %d\n",j,z,j*z);
			}
		}
	}
	return 0;
}
