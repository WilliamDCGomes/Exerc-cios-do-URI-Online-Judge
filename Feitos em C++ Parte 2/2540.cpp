#include<bits/stdc++.h>
using namespace std;
int main() {
	int times;
    while (cin>>times) {
        int imput [times];
        int impeachment = 0;
        for(int i = 0; i < times; i++) {
            cin>>imput[i];
            if (imput[i] == 1) {
                impeachment++;
            }
        }
        double n = (times * 2) / 3.0;
        if (impeachment >=  n) {
            cout<<"impeachment"<<endl;
        }
        else {
        	cout<<"acusacao arquivada"<<endl;
        }
    }
	return 0;
}
