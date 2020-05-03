#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    while(cin>>x){
	    cin>>y;
	    int cont=0,saca=0;
	    int matrix[x][y];
	    for(int i=0;i<x;i++){
	    	for(int j=0;j<y;j++){
	    		cin>>matrix[i][j];
	    		cont+=matrix[i][j];
	    		if(cont>=60){
	    			saca++;
	    			cont-=60;
				}
			}
		}
		cout<<saca<<" saca(s) e "<<cont<<" litro(s)"<<endl;
	}
	return 0;
}
