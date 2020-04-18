#include <stdio.h>
int main() {
	int vezes,i;
	scanf("%d",&vezes);
	for(i=0; i<vezes;i++){
		char num[1000];
		scanf("%s",&num);
		int leds=0,tam = strlen(num),j;
		for(j=0;j<tam;j++){
			if(num[j]=='1'){
				leds+=2;
			}
			else if(num[j]=='2'){
				leds+=5;
			}
			else if(num[j]=='3'){
				leds+=5;
			}
			else if(num[j]=='4'){
				leds+=4;
			}
			else if(num[j]=='5'){
				leds+=5;
			}
			else if(num[j]=='6'){
				leds+=6;
			}
			else if(num[j]=='7'){
				leds+=3;
			}
			else if(num[j]=='8'){
				leds+=7;
			}
			else if(num[j]=='9'){
				leds+=6;
			}
			else if(num[j]=='0'){
				leds+=6;
			}
		}
		printf("%d leds\n",leds);
	}
    return 0;
}
