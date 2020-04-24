#include<bits/stdc++.h>
using namespace std;
int main() {
	int times;
	cin>>times;
	for(int i=0;i<times;i++){
		char word1[50],word2[50];
		for(int j=0;j<50;j++){
			word1[j]=48;
			word2[j]=48;
		}
		cin>>word1>>word2;
		for(int j=0;j<50;j++){
			if(word1[j]==0){
				word1[j]=48;
			}
			if(word2[j]==0){
				word2[j]=48;
			}
		}
		for(int j=0;j<50;j++){
			if(word1[j]!=48){
				cout<<word1[j];
			}
			if(word2[j]!=48){
				cout<<word2[j];
			}
		}
		cout<<"\n";
	}
	return 0;
}
