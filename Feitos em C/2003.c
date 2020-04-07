#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	 int hora, min, atraso;
	 while(scanf("%d:%d", &hora, &min) != EOF){
         atraso = ((hora * 60) + min- 420);
         if(atraso > 0){
             printf("Atraso maximo: %d\n", atraso);
         }
         else{
             printf("Atraso maximo: 0\n");
         }
	 }
	 return 0;
}
