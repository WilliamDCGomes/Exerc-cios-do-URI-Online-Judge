#include<bits/stdc++.h>
using namespace std;
int main(){
	int ent;
	cin>>ent;
	int x,gasto=0,verba=0;
	for(x=0;x<ent;x++){
		int n;
		char le;
		cin>>le>>n;
		if(le=='G'){
			gasto+=n;
		}
		else{
			verba+=n;
		}
	}
	if(gasto>verba){
		cout<<"NAO VAI TER CORTE, VAI TER LUTA!"<<endl;
	}
	else{
		cout<<"A greve vai parar."<<endl;
	}
	return 0;
}
