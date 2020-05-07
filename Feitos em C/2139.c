#include <stdio.h>
int main() {
	int month,day;
	while(scanf("%d",&month)==1){
		scanf("%d",&day);
		if(month==12&&day==25){
			printf("E natal!\n");
		}
		else if(month==12&&day==24){
			printf("E vespera de natal!\n");
		}
		else if(month==12&&day>25){
			printf("Ja passou!\n");
		}
		else{
			if(month==12){
				printf("Faltam %d dias para o natal!\n",25-day);
			}
			else if(month==11){
				printf("Faltam %d dias para o natal!\n",25+30-day);
			}
			else if(month==10){
				printf("Faltam %d dias para o natal!\n",25+30+31-day);
			}
			else if(month==9){
				printf("Faltam %d dias para o natal!\n",25+30+31+30-day);
			}
			else if(month==8){
				printf("Faltam %d dias para o natal!\n",25+30+31+30+31-day);
			}
			else if(month==7){
				printf("Faltam %d dias para o natal!\n",25+30+31+30+31+31-day);
			}
			else if(month==6){
				printf("Faltam %d dias para o natal!\n",25+30+31+30+31+31+30-day);
			}
			else if(month==5){
				printf("Faltam %d dias para o natal!\n",25+30+31+30+31+31+30+31-day);
			}
			else if(month==4){
				printf("Faltam %d dias para o natal!\n",25+30+31+30+31+31+30+31+30-day);
			}
			else if(month==3){
				printf("Faltam %d dias para o natal!\n",25+30+31+30+31+31+30+31+30+31-day);
			}
			else if(month==2){
				printf("Faltam %d dias para o natal!\n",25+30+31+30+31+31+30+31+30+31+29-day);
			}
			else{
				printf("Faltam %d dias para o natal!\n",25+30+31+30+31+31+30+31+30+31+29+31-day);
			}
		}
	}
    return 0;
}
