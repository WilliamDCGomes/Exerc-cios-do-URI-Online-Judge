#include <stdio.h>
int main() {
	int times,i;
	while(scanf("%d",&times)==1){
		double vet[times],aux;
		double record=0.0;
		for(i=0;i<times;i++){
			scanf("%lf %lf",&vet[i],&aux);
			double sub = aux/vet[i];
			if(i==0){
				record = sub;
				printf("%d\n",i+1);
			}
			else if(sub>record){
				record = sub;
				printf("%d\n",i+1);
			}
		}
	}
    return 0;
}
