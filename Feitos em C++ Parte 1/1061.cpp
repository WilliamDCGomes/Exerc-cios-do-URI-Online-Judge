#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
	int diaini,diafini,horaini,minini,horafini,minifini,segini,segfini,duracaoh,duracaom,duracaodia,duracaoseg,duracao,contd=0,conth=0,contm=0;
	string dia1,dia2,doisponto;
	cin>>dia1>>diaini>>horaini>>doisponto>>minini>>doisponto>>segini>>dia2>>diafini>>horafini>>doisponto>>minifini>>doisponto>>segfini;
	duracaodia=(((diafini-diaini)*24)*60)*60;
	duracaoh=((horafini-horaini)*60)*60;
	duracaom=(minifini-minini)*60;
	duracaoseg=segfini-segini;
	duracao=duracaodia+duracaoh+duracaom+duracaoseg;
	while(duracao>=86400){
		contd++;
		duracao-=86400;
	}
	while(duracao>=3600){
		conth++;
		duracao-=3600;
	}
	while(duracao>=60){
		contm++;
		duracao-=60;
	}
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",contd,conth,contm,duracao);
	return 0;
}
