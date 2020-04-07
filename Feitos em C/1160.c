#include<stdio.h>
void main(){
    int a=0,z;
    scanf("%d",&a);
    int pa[a],pb[a],cont=0;
    double g1[a],g2[a],conta=0.0,contb=0.0;
    for(z=0;z<a;z++){
    	scanf("%d",&pa[z]);
    	scanf("%d",&pb[z]);
		scanf("%lf",&g1[z]);
		scanf("%lf",&g2[z]);
	}
	for(z=0;z<a;z++){
    	while(pa[z]<=pb[z]){
    		conta=pa[z]*(g1[z]/100);
    		contb=pb[z]*(g2[z]/100);
    		pa[z]+=conta;
    		pb[z]+=contb;
    		cont++;
    		if(cont==101)
    		{
    			pa[z]=pb[z]+1;
			}
		}
		if(cont>100){
			printf("Mais de 1 seculo.\n");
		}
		else{
			printf("%d anos.\n",cont);
		}
		cont=0;
	}
    return 0;
}
