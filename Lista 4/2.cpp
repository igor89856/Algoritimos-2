# include <iostream>
using namespace std;

int fat(int a){
    if(a==1){
        return a;
    }
    else{
        return a*fat(a-1);
    }
}

int main()
{
    int a;
    cout<<"informe o primeiro valor:"<<endl;
    cin>>a;

    cout<<fat(a);
}
