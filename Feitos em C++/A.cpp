#include<bits/stdc++.h>
using namespace std;
int main() {
	int quant,alunos=0;
	cin>>quant;
	for(int i=0;i<quant;i++){
		int input;
		cin>>input;
		while(input>=3){
			input-=3;
			alunos++;
		}
	}
	cout<<alunos*3<<endl;
	return 0;
}
