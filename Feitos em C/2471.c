#include <stdio.h>
int main() {
	int i,j;
	int dimen;
	scanf("%d",&dimen);
	int vet[dimen][dimen],values[dimen],cordX,cordY,writeValue,wrongValue;
	for(i=0;i<dimen;i++){
		values[i]=0;
	}
	for(i=0;i<dimen;i++){
		for(j=0;j<dimen;j++){
			scanf("%d",&vet[i][j]);
			values[i]+=vet[i][j];
		}
	}
	for(i=0;i<dimen;i++){
		if(i!=dimen-1&&values[i]!=values[i+1]){
			cordX=i;
		}
		else if(i==dimen-1&&values[i]!=values[i-1]&&values[i]!=values[i-2]){
			cordX=i;
		}
	}
	for(i=0;i<dimen;i++){
		values[i]=0;
	}
	for(i=0;i<dimen;i++){
		for(j=0;j<dimen;j++){
			values[i]+=vet[j][i];
		}
	}
	for(i=0;i<dimen;i++){
		if(i!=dimen-1&&values[i]!=values[i+1]){
			cordY=i;
			wrongValue=values[i];
		}
		else if(dimen>2&&i==dimen-1&&values[i]!=values[i-1]&&values[i]!=values[i-2]){
			cordY=i;
			wrongValue=values[i];
		}
		else{
			writeValue=values[i];
		}
	}
	int wrongNumber=vet[cordX][cordY];
	int writeNumber = writeValue - (wrongValue - wrongNumber);
	printf("%d %d\n",writeNumber,wrongNumber);
    return 0;
}
