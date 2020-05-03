#include <iostream>
using namespace std;
int main(){
	int num,v,s=1;
	cin>>num;
	v=num;
	string escolhas[num+1],escolhar[v+1];
	for(int rep=1;rep<=num;rep++){
		cin>>escolhas[rep]>>escolhar[rep];
	}
	for(int rep=1;rep<=num;rep++){
		if(escolhas[rep]=="tesoura"&&escolhar[s]=="papel"){
			cout<<"Caso #"<<rep<<": Bazinga!"<<endl;
		}
		else if(escolhas[rep]=="papel"&&escolhar[s]=="tesoura"){
			cout<<"Caso #"<<rep<<": Raj trapaceou!"<<endl;
		}
		else if(escolhas[rep]=="papel"&&escolhar[s]=="pedra"){
			cout<<"Caso #"<<rep<<": Bazinga!"<<endl;
		}
		else if(escolhas[rep]=="pedra"&&escolhar[s]=="papel"){
			cout<<"Caso #"<<rep<<": Raj trapaceou!"<<endl;
		}
		else if(escolhas[rep]=="pedra"&&escolhar[s]=="lagarto"){
			cout<<"Caso #"<<rep<<": Bazinga!"<<endl;
		}
		else if(escolhas[rep]=="lagarto"&&escolhar[s]=="pedra"){
			cout<<"Caso #"<<rep<<": Raj trapaceou!"<<endl;
		}
		else if(escolhas[rep]=="lagarto"&&escolhar[s]=="Spock"){
			cout<<"Caso #"<<rep<<": Bazinga!"<<endl;
		}
		else if(escolhas[rep]=="Spock"&&escolhar[s]=="lagarto"){
			cout<<"Caso #"<<rep<<": Raj trapaceou!"<<endl;
		}
		else if(escolhas[rep]=="Spock"&&escolhar[s]=="tesoura"){
			cout<<"Caso #"<<rep<<": Bazinga!"<<endl;
		}
		else if(escolhas[rep]=="tesoura"&&escolhar[s]=="Spock"){
			cout<<"Caso #"<<rep<<": Raj trapaceou!"<<endl;
		}
		else if(escolhas[rep]=="tesoura"&&escolhar[s]=="lagarto"){
			cout<<"Caso #"<<rep<<": Bazinga!"<<endl;
		}
		else if(escolhas[rep]=="lagarto"&&escolhar[s]=="tesoura"){
			cout<<"Caso #"<<rep<<": Raj trapaceou!"<<endl;
		}
		else if(escolhas[rep]=="lagarto"&&escolhar[s]=="papel"){
			cout<<"Caso #"<<rep<<": Bazinga!"<<endl;
		}
		else if(escolhas[rep]=="papel"&&escolhar[s]=="lagarto"){
			cout<<"Caso #"<<rep<<": Raj trapaceou!"<<endl;
		}
		else if(escolhas[rep]=="papel"&&escolhar[s]=="Spock"){
			cout<<"Caso #"<<rep<<": Bazinga!"<<endl;
		}
		else if(escolhas[rep]=="Spock"&&escolhar[s]=="papel"){
			cout<<"Caso #"<<rep<<": Raj trapaceou!"<<endl;
		}
		else if(escolhas[rep]=="Spock"&&escolhar[s]=="pedra"){
			cout<<"Caso #"<<rep<<": Bazinga!"<<endl;
		}
		else if(escolhas[rep]=="pedra"&&escolhar[s]=="Spock"){
			cout<<"Caso #"<<rep<<": Raj trapaceou!"<<endl;
		}
		else if(escolhas[rep]=="pedra"&&escolhar[s]=="tesoura"){
			cout<<"Caso #"<<rep<<": Bazinga!"<<endl;
		}
		else if(escolhas[rep]=="tesoura"&&escolhar[s]=="pedra"){
			cout<<"Caso #"<<rep<<": Raj trapaceou!"<<endl;
		}
		else{
			cout<<"Caso #"<<rep<<": De novo!"<<endl;
		}
		s++;
	}
	return 0;
}
