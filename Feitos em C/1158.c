#include <stdio.h>
int main() {
    int x,y,soma=0,vezes,z,i;
    scanf("%d",&vezes);
    for(z=0;z<vezes;z++){
	    scanf("%d %d",&x,&y);
	    if(x%2==0){
	    	x++;
	    	for(i=0;i<y;i++){
		    	soma+=x;
		    	x+=2;
			}
		}
		else{
			for(i=0;i<y;i++){
		    	soma+=x;
		    	x+=2;
			}
		} 
		printf("%d\n",soma);
		soma=0;
	}
    return 0;
}
