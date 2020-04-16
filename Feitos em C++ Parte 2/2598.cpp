#include<bits/stdc++.h>
using namespace std;
int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
		int n,m,quant=0;
		cin>>n>>m;
		while(n>0){
			n-=m;
			quant++;
		}
		cout<<quant<<endl;
	}
	return 0;
}
