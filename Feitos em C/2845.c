#include <stdio.h>
int main() {
    int a,aux=0,b,x;
    scanf("%d",&a);
	for(x=0;x<a;x++){
		scanf("%d",&b);
		if(b>aux){
			aux=b;
		}
	}
	aux++;
	printf("%d\n",aux);
    return 0;
}
