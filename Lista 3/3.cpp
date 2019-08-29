#include<iostream>
using namespace std;

bool primo(int i){

    bool a = true;
    for(int j= 2;j<i;j++){
        if(i%j==0){
            a=false;
            break;
        }
    }
    return a;
}

main(){
    int i;
    cout<<"qual numero deseja vereficar"<<endl;
    cin>>i;
    if(primo(i)==true)
        cout<<"true";
    else
        cout<<"false";

}
