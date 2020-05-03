#include<bits/stdc++.h>
using namespace std;
int main() {
	char word[101];
	while(cin>>word){
		int times = strlen(word);
		int aux =times;
		int aux2=0;
		for(int i=0;i<times;i++){
			for(int j=0;j<aux;j++){
				if(j==0){
					for(int z=0;z<aux2;z++){
						cout<<" ";
					}
				}
				if(j==aux-1){
					cout<<word[j];
				}
				else{
					cout<<word[j]<<" ";
				}
			}
			cout<<"\n";
			aux--;
			aux2++;
		}
		cout<<"\n";
	}
	return 0;
}
