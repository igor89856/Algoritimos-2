#include<iostream>
using namespace std;

void e4(int a,int b){
    int c=0;
    for(int i=0;i<=a;i++){
        cout<<c;
        c++;
        if(c==b){
            c=0;
        }
    }
}

main(){
    int a,b;
    cout<<"quantas posicoes"<<endl;
    cin>>a;
    cout<<"ate q numero vai"<<endl;
    cin>>b;
    e4(a,b);

}
