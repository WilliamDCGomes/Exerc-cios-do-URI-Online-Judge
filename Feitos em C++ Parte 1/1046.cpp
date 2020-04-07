#include <iostream>
using namespace std;
int main(){
	int horaini,horafini,duracao;
	cin>>horaini>>horafini;
	duracao=horafini-horaini;
	if(duracao<=0){
		duracao+=24;
	}
	if(horaini==0&&horafini==0){
		duracao=24;
	}
	cout<<"O JOGO DUROU "<<duracao<<" HORA(S)"<<endl;
	return 0;
}
