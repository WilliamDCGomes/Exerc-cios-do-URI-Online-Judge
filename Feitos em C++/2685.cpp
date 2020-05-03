#include<bits/stdc++.h>
using namespace std;
int main() {
	int x;
	while(cin>>x){
		if((x>=0&&x<90)||x==360){
			cout<<"Bom Dia!!"<<endl;
		}
		else if(x>=90&&x<180){
			cout<<"Boa Tarde!!"<<endl;
		}
		else if(x>=180&&x<270){
			cout<<"Boa Noite!!"<<endl;
		}
		else{
			cout<<"De Madrugada!!"<<endl;
		}
	}
	return 0;
}
