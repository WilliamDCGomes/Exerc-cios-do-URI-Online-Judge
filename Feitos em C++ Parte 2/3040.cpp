#include<bits/stdc++.h>
using namespace std;
int main(){
	int h,d,g,casos;
	cin>>casos;
	for(int i=0;i<casos;i++){
		cin>>h>>d>>g;
		if(h>=200&&h<=300){
			if(d>=50){
				if(g>=150){
					cout<<"Sim"<<endl;
				}
				else{
					cout<<"Nao"<<endl;
				}
			}
			else{
				cout<<"Nao"<<endl;
			}
		}
		else{
			cout<<"Nao"<<endl;
		}
	}
	return 0;
}
