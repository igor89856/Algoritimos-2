#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
void aa(float cap,float qntl,float km,float qntg){

    qntg=cap-qntl;

    cap=km/qntg;

    km=qntl/cap;

    cout<<fixed;
    cout<<"consumo..................................."<<ceil(cap)<<"km/l"<<endl;
    cout<<"autonomia até a prox abastecimento........."<<ceil(km)<<"km"<<endl;

}
main(){
    float cap,qntl,km,qntg;
    cout<<"capacidade do tanque"<<endl;
    cin>>cap;
    cout<<"quantidade atual do tanque"<<endl;
    cin>>qntl;
    cout<<"kms feitos des de o ultimo abastecimento"<<endl;
    cin>>km;
    aa(cap,qntl,km,qntg);


}
