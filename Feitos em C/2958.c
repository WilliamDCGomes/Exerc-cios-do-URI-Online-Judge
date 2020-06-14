#include <stdio.h>
int main() {
	int lines, columns;
	scanf("%d %d",&lines,&columns);
	int sizeLive = lines*columns+1, sizeDiscipline = sizeLive,i,j;
	int live[sizeLive], discipline[sizeDiscipline];
	for(i=0;i<sizeLive;i++){
		live[i]=-1;
		discipline[i]=-1;
	}
	char problem[3];
	int v=0,d=0;
	for(i=0;i<lines;i++){
		for(j=0;j<columns;j++){
			scanf("%s",&problem);
			if(problem[1]=='V'){
				live[v] = problem[0] - 48;
				v++;
			}
			else{
				discipline[d] = problem[0] - 48;
				d++;
			}
		}
	}
	if(sizeLive>0){
		for(i=0;i<sizeLive;i++){
			for(j=i+1;j<sizeLive;j++){
				if(live[j]>live[i]){
					int aux = live[j];
					live[j] = live[i];
					live[i] = aux;
				}
			}
		}
	}
	if(sizeDiscipline>0){
		for(i=0;i<sizeDiscipline;i++){
			for(j=i+1;j<sizeDiscipline;j++){
				if(discipline[j]>discipline[i]){
					int aux = discipline[j];
					discipline[j] = discipline[i];
					discipline[i] = aux;
				}
			}
		}
	}
	for(i=0;i<sizeLive;i++){
		if(live[i]!=-1){
			printf("%dV\n",live[i]);
		}
	}
	for(i=0;i<sizeDiscipline;i++){
		if(discipline[i]!=-1){
			printf("%dD\n",discipline[i]);
		}
	}
    return 0;
}
