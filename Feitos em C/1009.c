#include <stdio.h>
int main() {
	char nome[30];
    double a=0,b=0;
    scanf("%s",&nome);
    scanf("%lf",&a);
    scanf("%lf",&b);
    printf("TOTAL = R$ %.2f\n",a+(b*.15));
	return 0;
}
