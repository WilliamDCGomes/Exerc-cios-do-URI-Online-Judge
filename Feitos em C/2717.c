#include <stdio.h>
int main() {
	int n,a,b;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&b);
	if(n>=a+b){
		printf("Farei hoje!\n");
	}
	else{
		printf("Deixa para amanha!\n");
	}
	return 0;
}
