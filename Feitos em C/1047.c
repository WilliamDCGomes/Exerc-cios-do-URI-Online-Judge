#include <stdio.h>
void main(){
	int horaini,minini,horafini,minifini,duracaoh,duracaom,duracao;
    scanf("%d",&horaini);
    scanf("%d",&minini);
    scanf("%d",&horafini);
    scanf("%d",&minifini);
	duracaoh=(horafini-horaini)*60;
	duracaom=minifini-minini;
	duracao=duracaoh+duracaom;
	if(duracao<0){
		duracao+=1440;
	}
	duracaoh=0;
	duracaom=0;
	if(duracao==0){
		duracaoh=24;
	}
	while(duracao>60){
		duracaoh+=1;
		duracao-=60;
	}
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duracaoh,duracao);
	return 0;
}
