#include <iostream>

using namespace std;

int f(int n, int k){
    if(n==1) return 1;
    return (((f(n-1, k) + k-1)%n)+1);   
}

int main(){
	int quantity;
	cin>>quantity;
	for(int x=0;x<quantity;x++){
	    unsigned int n, k;
	    cin >> n >> k;
	    cout << "Case " << x+1 << ": " << f(n, k) << endl;
	}
}
