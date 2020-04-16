#include<bits/stdc++.h>
using namespace std;
int main() {
	char name[100];
	fflush(stdin);
	while(cin.getline(name,100)){
		int tam=strlen(name);
		int cont=0;
		for(int i=0;i<tam;i++){
			if(name[i]=='A'||name[i]=='J'||name[i]=='S'||name[i]=='a'||name[i]=='j'||name[i]=='s'){
				cont+=1;
			}
			else if(name[i]=='B'||name[i]=='K'||name[i]=='T'||name[i]=='b'||name[i]=='k'||name[i]=='t'){
				cont+=2;
			}
			else if(name[i]=='C'||name[i]=='L'||name[i]=='U'||name[i]=='c'||name[i]=='l'||name[i]=='u'){
				cont+=3;
			}
			else if(name[i]=='D'||name[i]=='M'||name[i]=='V'||name[i]=='d'||name[i]=='m'||name[i]=='v'){
				cont+=4;
			}
			else if(name[i]=='E'||name[i]=='N'||name[i]=='W'||name[i]=='e'||name[i]=='n'||name[i]=='w'){
				cont+=5;
			}
			else if(name[i]=='F'||name[i]=='O'||name[i]=='X'||name[i]=='f'||name[i]=='o'||name[i]=='x'){
				cont+=6;
			}
			else if(name[i]=='G'||name[i]=='P'||name[i]=='Y'||name[i]=='g'||name[i]=='p'||name[i]=='y'){
				cont+=7;
			}
			else if(name[i]=='H'||name[i]=='Q'||name[i]=='Z'||name[i]=='h'||name[i]=='q'||name[i]=='z'){
				cont+=8;
			}
			else if(name[i]=='I'||name[i]=='R'||name[i]=='i'||name[i]=='r'){
				cont+=9;
			}
		}
		int aux=10,resto;
		while(aux>9){
			aux=0;
			while(cont!=0){
				resto = cont % 10;
				cont = (cont-resto)/10;
				aux+=resto;
			}
			cont=aux;
		}
		cout<<aux<<endl;
	}
	return 0;
}
