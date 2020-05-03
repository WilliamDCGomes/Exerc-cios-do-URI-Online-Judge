#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,l,cont=0;
	while(cin>>n>>l){
		for(int x=0;x<n;x++){
			int i,j;
			cin>>i>>j;
			if(l==i&&j==0){
				cont++;
			}
		}
		cout<<cont<<endl;
		cont=0;
	}
	return 0;
}
