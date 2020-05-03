#include<bits/stdc++.h>
using namespace std;
int main() {
	char caracters[27];
	while(cin>>caracters){
		int lamps;
		cin>>lamps;
		int onLamps;
		for(int i=0;i<lamps;i++){
			cin>>onLamps;
			cout<<caracters[onLamps-1];
		}
		cout<<"\n";
	}
	return 0;
}
