#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b){
        if (a>c){
            cout<<a<<" eh o maior"<<endl;
        }
    }
    if (b>a){
        if (b>c){
            cout<<b<<" eh o maior"<<endl;
        }
    }
    if (c>a){
        if (c>b){
            cout<<c<<" eh o maior"<<endl;
        }
    }
    return 0;
}
