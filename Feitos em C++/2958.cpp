#include<bits/stdc++.h>
using namespace std;
int main() {
	int lines, columns;
	cin>>lines>>columns;
	int sizeLive = lines*columns+1, sizeDiscipline = sizeLive;
	int live[sizeLive], discipline[sizeDiscipline];
	for(int i=0;i<sizeLive;i++){
		live[i]=-1;
		discipline[i]=-1;
	}
	char problem[3];
	int v=0,d=0;
	for(int i=0;i<lines;i++){
		for(int j=0;j<columns;j++){
			cin>>problem;
			if(problem[1]=='V'){
				live[v] = problem[0] - 48;
				v++;
			}
			else{
				discipline[d] = problem[0] - 48;
				d++;
			}
		}
	}
	if(sizeLive>0){
		for(int i=0;i<sizeLive;i++){
			for(int j=i+1;j<sizeLive;j++){
				if(live[j]>live[i]){
					int aux = live[j];
					live[j] = live[i];
					live[i] = aux;
				}
			}
		}
	}
	if(sizeDiscipline>0){
		for(int i=0;i<sizeDiscipline;i++){
			for(int j=i+1;j<sizeDiscipline;j++){
				if(discipline[j]>discipline[i]){
					int aux = discipline[j];
					discipline[j] = discipline[i];
					discipline[i] = aux;
				}
			}
		}
	}
	for(int i=0;i<sizeLive;i++){
		if(live[i]!=-1){
			cout<<live[i]<<"V"<<endl;
		}
	}
	for(int i=0;i<sizeDiscipline;i++){
		if(discipline[i]!=-1){
			cout<<discipline[i]<<"D"<<endl;
		}
	}
	return 0;
}
