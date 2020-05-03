#include<bits/stdc++.h>
using namespace std;
int main(){
	int voltas,placas;
	double dist;
	cin>>voltas>>placas;
	dist=voltas*placas;
	for(int x=0;x<9;x++){
		double aux=((x+1)*dist)/10;
		int aux2=aux;
		if(aux>aux2&&x!=8){
			cout<<aux2+1<<" ";
		}
		else if(x!=8){
			cout<<aux2<<" ";
		}
		else if(aux>aux2&&x==8){
			cout<<aux2+1<<endl;
		}
		else{
			cout<<aux2<<endl;
		}
	}
	return 0;
}
