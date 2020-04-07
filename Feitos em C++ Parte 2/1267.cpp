#include <iostream>
using namespace std;
int main(){
	int a,j,cont = 0;
	bool achou = false;
	while(true){
		achou = false;
		cin >> a >> j;
		if(a == 0 && j == 0){
			break;
		}
		else{
			int m[a][j];
			for(int l = 0;l < j;l++){
				for(int c = 0;c < a;c++){
					cin >> m[c][l];
				}
			}
			for(int c = 0;c < a;c++){
				cont = 0;
				for(int l = 0; l < j;l++){
					if(m[c][l]==1){
						cont ++;
					}
					if(cont == j){
						achou = true;
						break;
					}	
				}
			}
			if(achou == true){
				cout << "yes" << endl;
			}
			else{
				cout << "no" << endl;
			}
		}
	}
	return 0;
}
