#include <iostream>
using namespace std;
int main(){
	int horaini,minini,horafini,minifini,duracaoh,duracaom,duracao;
	cin>>horaini>>minini>>horafini>>minifini;
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
	cout<<"O JOGO DUROU "<<duracaoh<<" HORA(S) E "<<duracao<<" MINUTO(S)"<<endl;
	return 0;
}
