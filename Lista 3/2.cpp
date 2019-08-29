#include<iostream>
using namespace std;
float novoS(float s,float v,float c){
    float a = (v*c)/100;
    a+=s;
    return a;
}
main(){
    float s,c,v;
    cout<<"qual e salario do vendedor"<<endl;
    cin>>s;
    cout<<"qual e o valor da venda"<<endl;
    cin>>v;
    cout<<"qual a comissao por venda"<<endl;
    cin>>c;
    float a = novoS(s,v,c);
    cout<<"o salario ajustado do vendedor e "<<a<<"R$";
}
