#include<bits/stdc++.h>
using namespace std;
int main() {
	int quant;
	while(true){
		cin>>quant;
		if(quant==0){
			break;
		}
		int dX,dY;
		cin>>dX>>dY;
		for(int i=0;i<quant;i++){
			int x,y;
			cin>>x>>y;
			if(x==dX||y==dY){
				cout<<"divisa"<<endl;
			}
			else if(x>dX&&y>dY){
				cout<<"NE"<<endl;
			}
			else if(x<dX&&y>dY){
				cout<<"NO"<<endl;
			}
			else if(x<dX&&y<dY){
				cout<<"SO"<<endl;
			}
			else if(x>dX&&y<dY){
				cout<<"SE"<<endl;
			}
		}
	}
	return 0;
}
