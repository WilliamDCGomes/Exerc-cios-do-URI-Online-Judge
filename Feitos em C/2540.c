#include <stdio.h>
int main() {
	int times,i;
    while (scanf("%d",&times)==1) {
        int imput [times];
        int impeachment = 0;
        for(i = 0; i < times; i++) {
            scanf("%d",&imput[i]);
            if (imput[i] == 1) {
                impeachment++;
            }
        }
        double n = (times * 2) / 3.0;
        if (impeachment >=  n) {
            printf("impeachment\n");
        }
        else {
        	printf("acusacao arquivada\n");
        }
    }
    return 0;
}
