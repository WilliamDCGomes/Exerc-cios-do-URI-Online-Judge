#include<bits/stdc++.h>
using namespace std;
int main() {
	int times;
	cin>>times;
	for(int i=0;i<times;i++){
		int insideX,insideY,mainX,mainY;
		cin>>insideX>>insideY>>mainX>>mainY;
		if((insideX<mainX&&insideY<mainY)||(insideX<mainY&&insideY<mainX)){
			cout<<"S"<<endl;
		}
		else{
			cout<<"N"<<endl;
		}
	}
	return 0;
}
