#include <stdio.h>
int main() {
	int n,m,i,j;
	while(scanf("%d",&n)==1){
		scanf("%d",&m);
		int city[n][m];
		int myPosiX=0,myPosiY=0,anaPosiX=0,anaPosiY=0,dist=0;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				scanf("%d",&city[i][j]);
				if(city[i][j]==1){
					myPosiX=i;
					myPosiY=j;
				}
				else if(city[i][j]==2){
					anaPosiX=i;
					anaPosiY=j;
				}
			}
		}
		if(myPosiX>anaPosiX){
			dist+=(myPosiX - anaPosiX);
		}
		else{
			dist+=(anaPosiX - myPosiX);
		}
		if(myPosiY>anaPosiY){
			dist+=(myPosiY - anaPosiY);
		}
		else{
			dist+=(anaPosiY - myPosiY);
		}
		printf("%d\n",dist);
	}
    return 0;
}
