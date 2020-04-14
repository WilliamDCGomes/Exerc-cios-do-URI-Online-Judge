#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,a,b,c;
	cin>>m>>a>>b;
	c=m-a-b;
	if(c>a&&c>b){
		cout<<c<<endl;
	}
	else if(a>b&&a>c){
		cout<<a<<endl;
	}
	else if(b>a&&b>c){
		cout<<b<<endl;
	}
	else if(b==c&&b>a){
		cout<<b<<endl;
	}
	else if(a==c&&a>b){
		cout<<a<<endl;
	}
	else if(b==a&&b>c){
		cout<<b<<endl;
	}
	return 0;
}
