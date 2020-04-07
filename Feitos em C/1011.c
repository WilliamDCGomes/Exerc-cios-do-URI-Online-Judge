#include<stdio.h>
void main (){
	double a=0;
	scanf("%lf",&a);
	a=a*a*a;
    printf("VOLUME = %.3f\n",((4.0/3)*3.14159)*a);
	return 0;
}
