#include<iostream>
using namespace std;

float calc(float v,float p,float h){
    float c = p*h;
    c = c*v;
    return c;
}

main(){
    float v,p,h;
    cout<<"valor do kw/h"<<endl;
    cin>>v;
    cout<<"potencia do dispositivo"<<endl;
    cin>>p;
    cout<<"quantaas horas ele ficou ligado"<<endl;
    cin>>h;
    float c= calc(v,p,h);

    cout<<"valor a pagar e "<<c<<"R$";
}
