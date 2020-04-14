#include <stdio.h>
int main() {
	char regiao[30];
    scanf("%s",&regiao);
    if(strcmp(regiao,"para")==0||strcmp(regiao,"roraima")==0||strcmp(regiao,"acre")==0||strcmp(regiao,"amapa")==0||strcmp(regiao,"amazonas")==0||strcmp(regiao,"rondonia")==0||strcmp(regiao,"tocantins")==0){
    	printf("Regiao Norte\n");
	}
	else{
		printf("Outra regiao\n");
	}
    return 0;
}
