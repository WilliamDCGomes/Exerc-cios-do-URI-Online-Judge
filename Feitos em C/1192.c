#include <stdio.h>
int main() {
	int times, i;
	scanf("%d",&times);
	for(i=0;i<times;i++){
		char num[10];
		scanf("%s",&num);
		if(num[0]==num[2]){
			int num1 = num[0] - 48;
			int num2 = num[2] - 48;
			printf("%d\n",num2*num1);
		}
		else{
			if(num[1]=='A'||num[1]=='B'||num[1]=='C'||num[1]=='D'||num[1]=='E'||num[1]=='F'||num[1]=='G'||num[1]=='H'||num[1]=='I'||num[1]=='J'||num[1]=='K'||num[1]=='L'||num[1]=='M'||num[1]=='N'||num[1]=='O'||num[1]=='P'||num[1]=='Q'||num[1]=='R'||num[1]=='S'||num[1]=='T'||num[1]=='U'||num[1]=='V'||num[1]=='W'||num[1]=='Y'||num[1]=='X'||num[1]=='Z'){
				int num1 = num[0] - 48;
				int num2 = num[2] - 48;
				printf("%d\n",num2-num1);
			}
			else{
				int num1 = num[0] - 48;
				int num2 = num[2] - 48;
				printf("%d\n",num2+num1);
			}
		}
	}
    return 0;
}
