#include <stdio.h>
int main() {
    int m,a,b,c;
    scanf("%d",&m);
    scanf("%d",&a);
    scanf("%d",&b);
	c=m-a-b;
	if(c>a&&c>b){
		printf("%d\n",c);
	}
	else if(a>b&&a>c){
		printf("%d\n",a);
	}
	else if(b>a&&b>c){
		printf("%d\n",b);
	}
	else if(b==c&&b>a){
		printf("%d\n",b);
	}
	else if(a==c&&a>b){
		printf("%d\n",a);
	}
	else if(b==a&&b>c){
		printf("%d\n",b);
	}
    return 0;
}
