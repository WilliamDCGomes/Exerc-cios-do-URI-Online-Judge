#include<bits/stdc++.h>
using namespace std;
int main() {
	int times;
	cin>>times;
	for(int i=0;i<times;i++){
		int quantJoao=0,quantMaria=0;
		for(int j=0;j<3;j++){
			int x,d;
			cin>>x>>d;
			quantJoao+=(x*d);
		}
		for(int j=0;j<3;j++){
			int x,d;
			cin>>x>>d;
			quantMaria+=(x*d);
		}
		if(quantJoao>quantMaria){
			cout<<"JOAO"<<endl;
		}
		else{
			cout<<"MARIA"<<endl;
		}
	}
	return 0;
}
