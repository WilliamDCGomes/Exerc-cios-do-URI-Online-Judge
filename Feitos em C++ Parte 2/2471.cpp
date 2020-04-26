#include<bits/stdc++.h>
using namespace std;
int main() {
	int dimen;
	cin>>dimen;
	int vet[dimen][dimen],values[dimen],cordX,cordY,writeValue,wrongValue;
	for(int i=0;i<dimen;i++){
		values[i]=0;
	}
	for(int i=0;i<dimen;i++){
		for(int j=0;j<dimen;j++){
			cin>>vet[i][j];
			values[i]+=vet[i][j];
		}
	}
	for(int i=0;i<dimen;i++){
		if(i!=dimen-1&&values[i]!=values[i+1]){
			cordX=i;
		}
		else if(i==dimen-1&&values[i]!=values[i-1]&&values[i]!=values[i-2]){
			cordX=i;
		}
	}
	for(int i=0;i<dimen;i++){
		values[i]=0;
	}
	for(int i=0;i<dimen;i++){
		for(int j=0;j<dimen;j++){
			values[i]+=vet[j][i];
		}
	}
	for(int i=0;i<dimen;i++){
		if(i!=dimen-1&&values[i]!=values[i+1]){
			cordY=i;
			wrongValue=values[i];
		}
		else if(dimen>2&&i==dimen-1&&values[i]!=values[i-1]&&values[i]!=values[i-2]){
			cordY=i;
			wrongValue=values[i];
		}
		else{
			writeValue=values[i];
		}
	}
	int wrongNumber=vet[cordX][cordY];
	int writeNumber = writeValue - (wrongValue - wrongNumber);
	cout<<writeNumber<<" "<<wrongNumber<<endl;
	return 0;
}
