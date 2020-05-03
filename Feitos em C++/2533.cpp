#include<bits/stdc++.h>
using namespace std;
int main() {
	int times;
	while(cin>>times){
		double dom=0,dem=0;
		for(int i=0;i<times;i++){
			int n,c;
			cin>>n>>c;
			dom+= (n*c);
			dem+= (c*100);
		}
		double resu = dom/dem;
		
		printf("%.4f\n",resu);
	}
	return 0;
}
