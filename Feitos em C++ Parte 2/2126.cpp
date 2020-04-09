#include<bits/stdc++.h>
using namespace std;
int main(){
	int x=1;
	char a[12],b[34];
	while(cin>>a){
		cin>>b;
		cout<<"Caso #"<<x<<":"<<endl;
		x++;
		int pegA,pegB;
		pegA=strlen(a);
		pegB=strlen(b);
		char a_Aux[pegA],b_Aux[pegB];
		strcpy(a_Aux,a);
		strcpy(b_Aux,b);
		int mantem,cont_aux=0,sequencias=0,posicao=0;
		for(int z=0;z<pegB;z++){
			mantem=z;
			for(int y=0;y<pegA;y++){
				if(a[y]==b[z]){
					z++;
					cont_aux++;
					if(cont_aux==pegA){
						sequencias++;
						posicao=z-pegA+1;
					}
				}
				else{
					break;
				}
			}
			z=mantem;
			cont_aux=0;
		}
		if(sequencias>0){
			cout<<"Qtd.Subsequencias: "<<sequencias<<"\nPos: "<<posicao<<"\n"<<endl;
		}
		else{
			cout<<"Nao existe subsequencia\n"<<endl;
		}
	}
	return 0;
}
