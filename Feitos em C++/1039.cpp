#include<bits/stdc++.h>
using namespace std;
int main() {
	int raio1;
    int x1;
    int y1;
    int raio2;
    int x2;
    int y2;
    while(cin >> raio1 >> x1 >> y1 >> raio2 >> x2 >> y2){
        if (raio1 >= raio2 && ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)) <=((raio1 - raio2) * (raio1 - raio2)))
            cout << "RICO" << endl;
        else
            cout << "MORTO" << endl;
	}         
	return 0;
}
