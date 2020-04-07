#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
	int nam;
	cin>>nam;
    int i,j,ver1,resu[nam];
    for(int k=0;k<nam;k++){
    	resu[k]=0;
	}
    for(int k=0;k<nam;k++){
	    cin>>i>>j;
	    if(i>j){
	    	for(int t=j;t<=i;t++){
	    		ver1=t%2;
	    		if(ver1==1||ver1==-1){
	    			resu[k]+=t;
				}
			}
			if(i%2==1||i%2==-1){
				resu[k]-=i;
			}
			if(j%2==1||j%2==-1){
				resu[k]-=j;
			}
		}
		else if(i<j){
	    	for(int t=i;t<=j;t++){
	    		ver1=t%2;
	    		if(ver1==1||ver1==-1){
	    			resu[k]+=t;
				}
			}
			if(i%2==1||i%2==-1){
				resu[k]-=i;
			}
			if(j%2==1||j%2==-1){
				resu[k]-=j;
			}
		}
	}
	for(int t=0;t<nam;t++){
		cout<<resu[t]<<endl;
	}
    return 0;
}
