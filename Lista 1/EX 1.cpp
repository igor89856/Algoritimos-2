#include <iostream>
using namespace std;

main(){

    int tot = 0,tes,totc=0,tots=0,totr=0,re,cont=0;
    char r;

    cout<<"quantos projetos de testes foram realizados ? "<<endl;
    cin>>tes;

    while(cont<tes){

        cout<<"total de cobaias utilizadas no "<<cont+1<<" teste :"<<endl;
        cin>>re;

        cout<<"tipo de cobaia utilizada(C=Coelho,S=Sapo,R=Rato)"<<endl;
        cin>>r;
        r=toupper(r);

        switch (r){
        case 'C' :
            totc+=re;
            tot+=re;
            cont++;
            break;
        case 'S' :
            tots+=re;
            tot+=re;
            cont++;
            break;
        case 'R' :
            totr+=re;
            tot+=re;
            cont++;
            break;
        default:
            cout<<"tipo de cobaia invalido"<<endl;
        }
    }

    cout<<fixed;
    cout.precision(2);
    cout<<"total de cobaias : "<<tot<<endl;
    cout<<"total de cobaias do tipo coelho: "<<totc<<endl;
    cout<<"total de cobaias do tipo sapo: "<<tots<<endl;
    cout<<"total de cobaias do tipo rato: "<<totr<<endl;
    cout<<"percentual de cobaias do tipo rato: "<<float(totr*100)/tot<<"%"<<endl;
    cout<<"percentual de cobaias do tipo coelho: "<<float(totc*100)/tot<<"%"<<endl;
    cout<<"percentual de cobaias do tipo sapo: "<<float(tots*100)/tot<<"%"<<endl;


}
