#include<iostream>
#include<cstdlib>
using namespace std;

void notas(float v[]){
    cout << "Notas: "<<endl;
    for (int i=0;i<4;i++)
        cin >> v[i];
}
float calcN(float v[],int p1,int p2,int p3,int p4){
    float m =((v[0]*p1)+(v[1]*p2)+(v[2]*p3)+(v[3]*p4))/10;
    return m;
}
void mostraN(float v[],float m){
    cout<<fixed;
    cout.precision(1);
    for(int i = 0;i<4;i++){
        cout<<"a "<<i+1<<" nota e "<<v[i]<<endl;
    }
    cout<<"a media e "<<m;
}
main(){
    int p1=1,p2=2,p3=3,p4=4;
    float v[4];
    cout<<"qual e o primeiro peso: "<<endl;
    cin>>p1;
    cout<<"qual e o segundo peso: "<<endl;
    cin>>p2;
    cout<<"qual e o terceiro peso: "<<endl;
    cin>>p3;
    cout<<"qual e o quarto peso: "<<endl;
    cin>>p4;
    notas(v);
    float m =calcN(v,p1,p2,p3,p4);
    mostraN(v,m);

}