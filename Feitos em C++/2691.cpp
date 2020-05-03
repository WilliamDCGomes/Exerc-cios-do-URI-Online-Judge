#include<bits/stdc++.h>
using namespace std;
int main() {
	int a;
	cin>>a;
	for(int x=0;x<a;x++){
		char aux[10];
		cin>>aux;
		int tam=strlen(aux),z1=0;
		char aux2[(tam-1)/2],aux3[(tam-1)/2];
		for(int z=0;z<tam;z++){
			aux2[z]=0;
			aux3[z]=0;
		}
		for(int z=0;z<tam;z++){
			if(aux[z]=='x'){
				break;
			}
			else{
				aux2[z1]=aux[z];
				z1++;
			}
		}
		int vai=0,z2=0;
		for(int z=0;z<tam;z++){
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
		//cout<<"i: "<<i<<"\nj: "<<j<<endl;
		//system("pause");
		if(i!=j){
			for(int z=5;z<11;z++){
				cout<<i<<" x "<<z<<" = "<<i*z<<" && "<<j<<" x "<<z<<" = "<<j*z<<endl;
			}
		}
		else{
			for(int z=5;z<11;z++){
				cout<<j<<" x "<<z<<" = "<<j*z<<endl;
			}
		}
	}
	return 0;
}
