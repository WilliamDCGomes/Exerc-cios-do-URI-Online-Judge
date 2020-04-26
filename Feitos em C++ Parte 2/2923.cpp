#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,a,w,c;
	while(cin>>t>>a>>w>>c){
		double veri = (a*100)/t;
		if(veri>=w&&veri<c){
			cout<<"warning"<<endl;
		}
		else if(veri>=c){
			cout<<"critical"<<endl;
		}
		else{
			cout<<"OK"<<endl;
		}
	}
	return 0;
}
