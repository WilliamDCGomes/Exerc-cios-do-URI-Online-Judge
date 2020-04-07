#include<stdio.h>
#include<math.h>
void main (){
	int a=0,b=0,c=0,d=0;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
    if (b>c&&d>a&&(c+d)>(a+b)&&c>0&&d>0&&a%2==0){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }
	return 0;
}
