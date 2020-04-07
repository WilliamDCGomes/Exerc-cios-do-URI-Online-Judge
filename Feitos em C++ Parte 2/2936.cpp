#include<bits/stdc++.h>
using namespace std;
int main(){
	int vet[5];
	for(int x=0;x<5;x++){
		cin>>vet[x];
	}
	int tot=((300*vet[0])+(1500*vet[1])+(600*vet[2])+(1000*vet[3])+(150*vet[4]))+225;
	cout<<tot<<endl;
	return 0;
}
