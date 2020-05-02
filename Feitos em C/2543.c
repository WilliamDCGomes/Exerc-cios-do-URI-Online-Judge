#include <stdio.h>
int main() {
	int n,l;
	while(scanf("%d",&n)==1){
		int cont=0,x;
		scanf("%d",&l);
		for(x=0;x<n;x++){
			int i,j;
			scanf("%d %d",&i,&j);
			if(l==i&&j==0){
				cont++;
			}
		}
		printf("%d\n",cont);
	}
    return 0;
}
