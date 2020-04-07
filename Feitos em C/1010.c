#include<stdio.h>
void main (){
	int a=0,b=0,d=0,e=0;
	double c=0,f=0;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%lf",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%lf",&f);
	printf("VALOR A PAGAR: R$ %.2f\n",(b*c)+(e*f));
	return 0;
}
