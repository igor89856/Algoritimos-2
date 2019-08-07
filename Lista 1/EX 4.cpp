#include<iostream>
using namespace std;
main(){

    int n=1,s,cont=0;

    while(cont<3){
           s=0;
           n++;
           for(int i=1;i<n;i++){
                if(n%i==0){
                    s+=i;
                }
           }
           if(s==n){
                cout<<n<<" ";
                cont++;
           }
    }
}
