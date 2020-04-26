#include <stdio.h>
int main() {
	int t,a,w,c;
	while(scanf("%d",&t)==1){
		scanf("%d %d %d",&a,&w,&c);
		double veri = (a*100)/t;
		if(veri>=w&&veri<c){
			printf("warning\n");
		}
		else if(veri>=c){
			printf("critical\n");
		}
		else{
			printf("OK\n");
		}
	}
    return 0;
}
