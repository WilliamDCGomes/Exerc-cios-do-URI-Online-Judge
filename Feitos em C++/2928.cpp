#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,cont=0,pulos=0;
    bool foi=true;
    cin>>a;
    char linha[101];
    string validaP="",validaT="",aux[a];
    for(int i=0;i<a;i++){
    	cin>>linha;
    	aux[i]=linha;
    	int numPontos = strlen(linha);
    	if(i==0){
	    	for(int y=0;y<numPontos;y++){
	    		validaP+=".";
	    		validaT+="-";
			}			
		}
    	if(aux[i]==validaP){
    		cont++;
		}
		else if(aux[i]==validaT){
			cont=0;
		}
		if(cont==3){
			foi=false;
		}
		if(i>0&&aux[i]==validaP&&aux[i-1]==validaT){
    		pulos++;
		}
	}
	if(foi==true){
		cout<<pulos<<endl;
	}
	else{
		cout<<"N"<<endl;
	}
	return 0;
}
