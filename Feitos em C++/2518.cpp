#include<bits/stdc++.h>
using namespace std;
int main() {
	int degraus;
	while(cin>>degraus){
		int h,c,l;
		cin>>h>>c>>l;
		double compRampa=sqrt(pow(c,2)+pow(h,2));
		compRampa*=degraus;
		double area=compRampa*l;
		printf("%.4f\n",area/10000);
	}
	return 0;
}
