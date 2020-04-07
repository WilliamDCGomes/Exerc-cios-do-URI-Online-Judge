#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	while(true){
		int a,b,c,d;
		cin>>a;
		if(a==0){
			break;
		}
		cin>>b>>c;
		int resp = sqrt((a*b*100)/c);
		cout<<resp<<endl;
	}
	return 0;
}
