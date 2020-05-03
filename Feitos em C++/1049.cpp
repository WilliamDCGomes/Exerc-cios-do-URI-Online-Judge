#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	string entrada1,entrada2,entrada3;
	cin>>entrada1>>entrada2>>entrada3;
	if(entrada1=="vertebrado"){
		if(entrada2=="ave"){
			if(entrada3=="carnivoro"){
				cout<<"aguia"<<endl;
			}
			else{
				cout<<"pomba"<<endl;
			}
		}
		else{
			if(entrada3=="onivoro"){
				cout<<"homem"<<endl;
			}
			else{
				cout<<"vaca"<<endl;
			}
		}
	}
	else{
		if(entrada2=="inseto"){
			if(entrada3=="hematofago"){
				cout<<"pulga"<<endl;
			}
			else{
				cout<<"lagarta"<<endl;
			}
		}
		else{
			if(entrada3=="hematofago"){
				cout<<"sanguessuga"<<endl;
			}
			else{
				cout<<"minhoca"<<endl;
			}
		}
	}
	return 0;
}
