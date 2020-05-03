#include<bits/stdc++.h>
using namespace std;
int main(){
	int vet;
	while(cin>>vet){
		int matriz[vet][vet];
		for(int x=0;x<vet;x++){
			for(int y=0;y<vet;y++){
				matriz[x][y]=0;
			}
		}
		int start=vet/3;
		for(int x=start;x<vet-start;x++){
			for(int y=start;y<vet-start;y++){
				matriz[x][y]=1;
			}
		}
		int aux=0;
		for(int x=0;x<vet;x++){
			if(matriz[x][aux]==0){
				matriz[x][aux]=2;
			}
			aux++;
		}
		aux=vet-1;
		for(int x=0;x<vet;x++){
			if(matriz[x][aux]==0){
				matriz[x][aux]=3;
			}
			aux--;
		}
		int x=0,x1=vet-1,y=0,y1=vet-1;
		while(true){
			if(vet%2==0){
				break;
			}
			else if(x!=x1){
				x++;
				x1--;
			}
			else if(y!=y1){
				y++;
				y1--;				
			}
			else{
				break;
			}
		}
		matriz[x][y]=4;
		for(int x=0;x<vet;x++){
			for(int y=0;y<vet;y++){
				cout<<matriz[x][y];
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	return 0;
}
