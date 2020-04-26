#include <stdio.h>
int main() {
	int n,m,i;
	while(scanf("%d",&n)==1){
		scanf("%d",&m);
		int input,resu=0;
		for(i=0;i<n;i++){
			scanf("%d",&input);
			if(i>=n-m){
				resu+=input;
			}
		}
		printf("%d\n",resu);
	}
    return 0;
}
