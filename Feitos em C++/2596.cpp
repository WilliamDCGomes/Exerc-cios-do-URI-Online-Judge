#include<bits/stdc++.h>
using namespace std;
int main() {
	int quant;
	cin>>quant;
	for(int i=0;i<quant;i++){
		int esfera,pegaEsfera=0;
		cin>>esfera;
		for(int j=esfera;j>0;j--){
			int divisores=0;
			for(int z=j;z>0;z--){
				if(j%z==0){
					divisores++;
				}
			}
			if(divisores%2==0){
				pegaEsfera++;
			}
		}
		cout<<pegaEsfera<<endl;
	}
	return 0;
}
