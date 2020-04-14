#include<bits/stdc++.h>
using namespace std;
int main(){
	int quant, anoes = 0, elfos = 0, humanos = 0, magos = 0, hobbits = 0;
	cin>>quant;
    for(int i = 0; i < quant; i++) {
        string name;
        cin>>name;
        char raca;
        cin>>raca;
        if(raca == 'A') {
            anoes++;
        }
        else if(raca == 'E') {
            elfos++;
        }
        else if(raca == 'H') {
        	humanos++;
        }
        else if(raca == 'M') {
            magos++;
        }
        else if(raca == 'X') {
            hobbits++;
        }
    }
    cout << hobbits << " Hobbit(s)\n" << humanos << " Humano(s)\n" << elfos << " Elfo(s)\n" << anoes << " Anao(s)\n" << magos << " Mago(s)\n" << endl;
	return 0;
}
