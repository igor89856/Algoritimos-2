# include <iostream>
using namespace std;

int mdc(int a,int b,int c){
    if(a%c==0 && b%c==0){
        return c;
    }
    else{
        mdc(a,b,c-1);
    }
}

int main()
{
    int a,b,c;
    cout<<"informe o primeiro valor:"<<endl;
    cin>>a;
    cout<<"informe o segundo valor:"<<endl;
    cin>>b;

    if(a>b){
        c = b;
        cout<<mdc(a,b,c);
    }
    else{
        c = a;
        cout<<mdc(b,a,c);
    }
}
