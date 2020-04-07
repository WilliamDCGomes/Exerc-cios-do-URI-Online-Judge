#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(a>b){
		cout<<"Eu odeio a professora!"<<endl;
	}
	else if(b-3>=a){
		cout<<"Muito bem! Apresenta antes do Natal!"<<endl;
	}
	else{
		cout<<"Parece o trabalho do meu filho!"<<endl;
		if(b+2<=24){
			cout<<"TCC Apresentado!"<<endl;
		}
		else{
			cout<<"Fail! Entao eh nataaaaal!"<<endl;
		}
	}
	return 0;
}
