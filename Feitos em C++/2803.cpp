#include<bits/stdc++.h>
using namespace std;
int main(){
    string regiao;
    cin>>regiao;
    if(regiao=="para"||regiao=="roraima"||regiao=="acre"||regiao=="amapa"||regiao=="amazonas"||regiao=="rondonia"||regiao=="tocantins"){
    	cout<<"Regiao Norte"<<endl;
	}
	else{
		cout<<"Outra regiao"<<endl;
	}
	return 0;
}
