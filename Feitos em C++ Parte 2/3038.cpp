#include<bits/stdc++.h>
using namespace std;
int main() {
	char f[256];
	while(cin.getline(f,256)){
		int sizeF = strlen(f);
		for(int i=0;i<sizeF;i++){
			if(f[i]=='@'){
				cout<<"a";
			}
			else if(f[i]=='&'){
				cout<<"e";
			}
			else if(f[i]=='!'){
				cout<<"i";
			}
			else if(f[i]=='*'){
				cout<<"o";
			}
			else if(f[i]=='#'){
				cout<<"u";
			}
			else{
				cout<<f[i];
			}
		}
		cout<<"\n";
	}
	return 0;
}
