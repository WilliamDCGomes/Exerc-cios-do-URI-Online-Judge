#include <stdio.h>
int main() {
	int a,i;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		int n,m,quant=0;
		scanf("%d %d",&n,&m);
		while(n>0){
			n-=m;
			quant++;
		}
		printf("%d\n",quant);
	}
	return 0;
}
