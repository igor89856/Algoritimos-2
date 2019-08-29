# include <iostream>
using namespace std;

int pot(int a,int b){
    if(b==1){
        return a;
    }
    else{
        return a*pot(a,b-1);
    }
}

int main()
{
    int a,b,c;
    cout<<"informe o valor da base:"<<endl;
    cin>>a;
    cout<<"informe o valor do expoente:"<<endl;
    cin>>b;

    if(a>0 && b>0){
        cout<<pot(a,b);
    }
    else{
        cout<<"valores invalidos";
    }
}
