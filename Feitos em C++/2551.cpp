#include<bits/stdc++.h>
using namespace std;
int main() {
	int times;
	while(cin>>times){
		double vet[times],aux;
		double record=0.0;
		for(int i=0;i<times;i++){
			cin>>vet[i]>>aux;
			double sub = aux/vet[i];
			if(i==0){
				record = sub;
				cout<<i+1<<endl;
			}
			else if(sub>record){
				record = sub;
				cout<<i+1<<endl;
			}
		}
	}
	return 0;
}
