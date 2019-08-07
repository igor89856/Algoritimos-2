#include<iostream>
using namespace std;
main(){

    int n1,n2,p1,p2,t1,t2,p3,t3,nt1=0,nt=0;
    bool t=true;
    while(t==true){
        cout<<"digite o primeiro valor"<<endl;
        cin>>n1;
        cout<<"digite o segundo valor"<<endl;
        cin>>n2;
        if(n1!=0 && n2!=0){
            t=false;
        }
        else{
            cout<<"valores não podem ser zero!"<<endl;
        }
    }

    p1=n1;
    p2=n2;
    p3=n1;

    while(p1!=0){
        nt=0;
        nt1=0;
        t1=p1%10;
        p1=p1/10;
        while(p2!=0){
           t2=p2%10;
           p2=p2/10;
           if(t1==t2){
                nt++;
           }
        }
        while(p3!=0){
           t3=p3%10;
           p3=p3/10;
           if(t1==t3){
                nt1++;
           }
        }
        if(nt!=nt1){
            t=true;
            break;
        }
    }
    if(t==false){
        cout<<n1<<" e uma permutacao de "<<n2;
    }
    else{
        cout<<n1<<" nao uma permutacao de "<<n2;
    }


}
