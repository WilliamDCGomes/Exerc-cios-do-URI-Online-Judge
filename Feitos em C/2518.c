#include <stdio.h>
#include <math.h>
int main() {
	int degraus;
	while(scanf("%d",&degraus)==1){
		int h,c,l;
		scanf("%d",&h);
		scanf("%d",&c);
		scanf("%d",&l);
		double compRampa=sqrt(pow(c,2)+pow(h,2));
		compRampa*=degraus;
		double area=compRampa*l;
		printf("%.4f\n",area/10000);
	}
	return 0;
}
