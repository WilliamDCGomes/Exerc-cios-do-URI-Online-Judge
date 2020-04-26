#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	while(cin>>n>>m){
		int city[n][m];
		int myPosiX=0,myPosiY=0,anaPosiX=0,anaPosiY=0,dist=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>city[i][j];
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
		cout<<dist<<endl;
	}
	return 0;
}
