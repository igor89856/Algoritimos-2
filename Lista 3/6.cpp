#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void gerarM(int m[][6]){
    for(int i = 0;i<4;i++){
        for(int j =0;j<6;j++){
            m[i][j]=rand()%100;
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

void calcM(int m[][6]){
    int ma = m[0][0];
    for(int i = 0;i<6;i++){
        for(int j =0;j<4;j++){
            cout<<m[j][i]<<" ";
            if(ma<m[j][i]){
                ma=m[j][i];
            }
        }
        cout<<endl;
    }
    cout<<"------------------------------"<<endl;
    cout<<"maior elemento e "<<ma<<endl;
}

main(){
    srand(time(NULL));
    int m[4][6];
    gerarM(m);
    cout<<"------------------------------"<<endl;
    calcM(m);

}
