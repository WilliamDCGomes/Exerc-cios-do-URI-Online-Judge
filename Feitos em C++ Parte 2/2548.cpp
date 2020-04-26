#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	while(cin>>n>>m){
		int input,resu=0;
		for(int i=0;i<n;i++){
			cin>>input;
			if(i>=n-m){
				resu+=input;
			}
		}
		cout<<resu<<endl;
	}
	return 0;
}
