#include<iostream>
using namespace std;

void somaP(int v[]){
    int s=0;
    bool a;
    for(int i=0;i<5;i++){
        a=true;
        for(int j= 2;j<v[i];j++){
            if(v[i]%j==0){
                a=false;
                break;
            }
        }
        if(a==true){
            s+=v[i];
        }
    }
    if(s%2==0){
        cout<<"a soma dos numeros primos e  par";
    }
    else{
        cout<<"a soma dos numeros primos e impar";
    }
}

main(){
    int v[5];
    for(int i=0;i<5;i++){
        cin>>v[i];
        cout<<endl;
    }
    somaP(v);
}
