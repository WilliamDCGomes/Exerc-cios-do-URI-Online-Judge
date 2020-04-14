#include <stdio.h>
int main() {
	int x;
    char name[30];
    for(x=0;x<10;x++){
    	scanf("%s",&name);
    	if(x==2||x==6||x==8){
    		printf("%s\n",name);
		}
	}
    return 0;
}
