#include<stdio.h>
void main (){
	double a=0,b=0,c=0,d=0,e=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	d=a*0.35;
    e=b*0.75;
    c=((d+e)*10)/11;
    printf("MEDIA = %.5f\n",c);
	return 0;
}
