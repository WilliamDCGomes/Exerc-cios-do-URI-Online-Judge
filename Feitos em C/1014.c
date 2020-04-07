#include<stdio.h>
#include<math.h>
void main (){
	int distancia=0;
    double litros=0;
	scanf("%d",&distancia);
    scanf("%lf",&litros);
	printf("%.3f km/l\n",distancia/litros);
	return 0;
}
