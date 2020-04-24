#include<bits/stdc++.h>
using namespace std;
int main() {
	char phrase[2000];
	cin.getline(phrase,2000);
	int size = strlen(phrase);
	int first=0,iAux;
	for(int i=0;i<size;i++){
		if(phrase[i]==' '){
			cout<<" ";
			first++;
			iAux=i+2;
		}
		else if(i%2==1&&first==0){
			cout<<phrase[i];
		}
		else if(i==iAux){
			cout<<phrase[i];
			iAux+=2;
		}
	}
	cout<<"dsdsds\n";
	return 0;
}
