#include <stdio.h>
int main() {
	int times;
	while(scanf("%d",&times)==1){
		double dom=0,dem=0;
		int i;
		for(i=0;i<times;i++){
			int n,c;
			scanf("%d %d",&n,&c);
			dom+= (n*c);
			dem+= (c*100);
		}
		double resu = dom/dem;
		
		printf("%.4f\n",resu);
	}
    return 0;
}
