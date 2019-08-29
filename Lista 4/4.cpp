#include<iostream>
using namespace std;
int numero;
int aux=0;
int k=0;
int verifica(int n)
{
    if(n==0)
      return 0;
     else
    {
     if(aux==(n %10))
     {
        k++;
     }
     n=n / 10;
     return verifica(n);
    }
return 0;
 }
int main()
{
   cout<<"digite um numero"<<endl;
   cin>>numero;
   cout<<"digite um numero a ser verificado"<<endl;
   cin>>aux;
   verifica(numero);
   cout<<"o numero repete "<<k<<" vezes"<<endl;
   return 0;
}