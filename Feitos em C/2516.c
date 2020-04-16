#include <stdio.h>
int main() {
	int s;
	while(scanf("%d",&s)==1){
		int va,vb;
		double temp=0;
		scanf("%d",&va);
		scanf("%d",&vb);
		if(va>vb){
			temp=(double)s/(va-vb);
			printf("%.2f\n",temp);
		}
		else{
			printf("impossivel\n");
		}
	}
	return 0;
}
