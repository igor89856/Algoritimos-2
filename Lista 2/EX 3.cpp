/*3 - Elabore um programa que possibilite a realização dos seguintes
cálculos:
1 – Potenciação (entrada dois valores inteiros e positivos)
2 – Raiz quadrada (entrada um valor inteiro e positivo)
3 - Arredondar o valor seguindo o critério da primeira casa decimal e
mostrar na tela (entrada um valor float)
*/
#include <iostream>
#include <cmath>
using namespace std;
void poten()
{
	int b,e;
	cout<< "informe a base e o expoente"<<endl;
	cin>>b>>e;
	cout <<"Resultado: "<< pow(b,e);

}

void raiz ()
{
	int x;
	cout<<"informe o numero"<<endl;
	cin >> x;
	cout <<"Resultado: "<<sqrt(x)<< endl;

}

void arre()
{
	float num;
	cout << "informe o numero para arredondar"<<endl;
	cin>> num;
	cout<<"Resultado: "<< round(num);

}

void primo()
{
	int n,i;
	bool t=false;
	cout<<"informe o numero que deseja verificar"<<endl;
	cin >> n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			t=true;
			break;
		}
	}
	if(t==false)
	{
		cout << "numero e primo"<<endl;
	}
	if(t==true)
	{
		cout << "numero nao e primo"<<endl;
	}
	return 0;
}

void perfe()
{
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
int main()
{
	int e;
	l
	cout << " o que vc deseja fazer"<<endl;
	cout << "1 Potenciação"<<endl;
	cout << "2 Raiz quadrada"<<endl;
	cout << "3 Arrendontar um numero "<<endl;
	cout << "4 Verificar se o numero e primo"<< endl;
	cout << "5 verificar se o numero é perfeito"<<endl;
	cin>>e;
	if(e==1)
		poten();

	if(e==2)
		raiz();

	if(e==3)
		arre();
	
	if(e==4)
		primo();
	
	else
		perfe();

}