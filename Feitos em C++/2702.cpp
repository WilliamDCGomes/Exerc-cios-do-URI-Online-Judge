#include<bits/stdc++.h>
using namespace std;
int main() {
	int pedidos[3],refeicoes[3],faltou=0;
	cin>>refeicoes[0]>>refeicoes[1]>>refeicoes[2]>>pedidos[0]>>pedidos[1]>>pedidos[2];
	for(int i=0;i<3;i++){
		if(pedidos[i]>refeicoes[i]){
			faltou+=(pedidos[i]-refeicoes[i]);
		}
	}
	cout<<faltou<<endl;
	return 0;
}
