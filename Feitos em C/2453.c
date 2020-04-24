#include <stdio.h>
int main() {
	char phrase[2000];
	int i;
	scanf("%[A-Z a-z]",&phrase);
	int size = strlen(phrase);
	int first=0,iAux=-1,aux=1;
	for(i=0;i<size;i++){
		if(phrase[i]==' '){
			printf(" ");
			first++;
			iAux=i+2;
		}
		else if(i==aux&&first==0){
			printf("%c",phrase[i]);
			aux+=2;
		}
		else if(i==iAux){
			printf("%c",phrase[i]);
			iAux+=2;
		}
	}
	printf("\n");
    return 0;
}
