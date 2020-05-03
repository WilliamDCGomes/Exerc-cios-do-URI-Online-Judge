#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,aux=0,b;
	cin>>a;
	for(int x=0;x<a;x++){
		cin>>b;
		if(b>aux){
			aux=b;
		}
	}
	aux++;
	cout<<aux<<endl;
	return 0;
}
