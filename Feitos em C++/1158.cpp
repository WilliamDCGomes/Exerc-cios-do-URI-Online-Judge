#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int x,y,soma=0,vezes;
    cin>>vezes;
    for(int z=0;z<vezes;z++){
	    cin>>x>>y;
	    if(x%2==0){
	    	x++;
	    	for(int i=0;i<y;i++){
		    	soma+=x;
		    	x+=2;
			}
		}
		else{
			for(int i=0;i<y;i++){
		    	soma+=x;
		    	x+=2;
			}
		} 
		cout<<soma<<endl;
		soma=0;
	}
	return 0;
}
