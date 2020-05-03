#include <iostream>
using namespace std;
int main(){
	int par[5],impar[5],entrada[15],ver,p=0,p1=0,in=0,i1=0,contador=0,contadorfinal=0,aux=0,aux1=0,impares=0,pares=0;
	for(int i=0;i<=14;i++){
		cin>>entrada[i];
		ver=entrada[i]%2;
		if (contador==2&&aux<1){
			p1=0;
			i1=0;
			aux++;
		}
		if (contador==2){
		   if(ver==0){
				par[p]=entrada[i];
				p++;
				aux1++;
				pares++;
			}
			else{
				impar[in]=entrada[i];
				in++;
				aux1++;
				impares++;
			}
		}
		else if(ver==0){
			par[p]=entrada[i];
			p++;
			if(p==5){
				for(int j=0;j<=4;j++){
					cout<<"par["<<p1<<"] = "<<par[j]<<endl;
					p1++;
				}
				for(int j=0;j<=4;j++){
					par[j]=0;
				}
				contador++;
				p=0;
			}
		}
		else if(ver<0||ver>0){
			impar[in]=entrada[i];
			in++;
			if(in==5){
				for(int j=0;j<=4;j++){
					cout<<"impar["<<i1<<"] = "<<impar[j]<<endl;
					i1++;
				}
				for(int j=0;j<=4;j++){
					impar[j]=0;
				}
				contador++;
				in=0;
			}
		}
	}
	if(contador<3){
		for(int j=0;j<in;j++){
			cout<<"impar["<<i1<<"] = "<<impar[j]<<endl;
			i1++;
		}
		for(int j=0;j<p;j++){
			cout<<"par["<<p1<<"] = "<<par[j]<<endl;
			p1++;
		}
	}
	return 0;
}
