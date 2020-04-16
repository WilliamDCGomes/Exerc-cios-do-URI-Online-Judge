#include <stdio.h>
int main() {
	int experience=1;
	while(2>1){
		int n,ciclos=0;
		scanf("%d",&n);
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
