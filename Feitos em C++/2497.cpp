#include<bits/stdc++.h>
using namespace std;
int main() {
	int experience=1;
	while(true){
		int n,ciclos=0;
		cin>>n;
		if(n==-1){
			break;
		}
		while(n>1){
			ciclos++;
			n-=2;
		}
		printf("Experiment %d: %d full cycle(s)\n",experience,ciclos);
		experience++;
	}
	return 0;
}
