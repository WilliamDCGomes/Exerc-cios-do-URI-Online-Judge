#include <iostream>
using namespace std;
int main(){
    int entrada;
    while(cin>>entrada){
        int matriz[entrada][entrada],v=1,z=0;
        for(int x=0;x<entrada;x++){
            for(int y=0;y<entrada;y++){
                matriz[x][y]=3;
            }
        }
        for(int x=0;x<entrada;x++){
            for(int y=0;y<entrada;y++){
                if(x==y){
                    matriz[x][y]=1;
                }
            }
        }
        for(int x=0;x<entrada;x++){
            for(int y=0;y<entrada;y++){
                if(x==z&&y==entrada-v){
                    matriz[x][y]=2;
                    z++;
                    v++;
                }
            }
        }
        for(int x=0;x<entrada;x++){
            for(int y=0;y<entrada;y++){
                cout<<matriz[x][y];
            }
            cout<<"\n";
        }
    }
    return 0;
}
