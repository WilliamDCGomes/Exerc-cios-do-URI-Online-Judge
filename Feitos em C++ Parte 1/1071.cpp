#include <iostream>
#include<stdio.h>
using namespace std;
int main(){
    int i,j,ver1,resu=0;
    cin>>i>>j;
    if(i>j){
    	for(int t=j;t<=i;t++){
    		ver1=t%2;
    		if(ver1==1||ver1==-1){
    			resu+=t;
			}
		}
		if(i%2==1||i%2==-1){
			resu-=i;
		}
		if(j%2==1||j%2==-1){
			resu-=j;
		}
	}
	else if(i<j){
    	for(int t=i;t<=j;t++){
    		ver1=t%2;
    		if(ver1==1||ver1==-1){
    			resu+=t;
			}
		}
		if(i%2==1||i%2==-1){
			resu-=i;
		}
		if(j%2==1||j%2==-1){
			resu-=j;
		}
	}
	cout<<resu<<endl;
    return 0;
}
