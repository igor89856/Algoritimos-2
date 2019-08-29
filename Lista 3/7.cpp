#include<iostream>
using namespace std;


int fibonacci(int numero,int x, int y)
{
  if(numero == 0)
    return 0;
  if(numero > 1)
    return y + fibonacci(numero - 1, y, x + y);
  else
    return 1;
}

void fibonacci(int a){
    int b = 1,c = 1;
    cout << b<<","<<c;
    if(a>2){

        int x = 3,s;
        while(x<=a){
            s = b+c;
            cout<<","<<s;
            b=c;
            c=s;
            x++;
        }
    }
}

main(){
    int a;
    cout<<"ate q elementode fibonacci deseja ir(2 ou maior)"<<endl;
    cin>>a;
    if(a>1){
        fibonacci(a);
    }else{
        cout<<"nao e valido neste algoritimo"<<endl;
    }
}
