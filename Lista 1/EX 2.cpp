//Escrever um programa que l� um n�mero inteiro. Mostrar se o n�mero � ou n�o primo.
//N�mero primo � aquele que � divis�vel por 1 e por ele mesmo. O sistema dever� permitir o teste
//com N n�meros, apresentando o resultado e solicitando se o usu�rio deseja avaliar outro valor
//ou encerrar o programa. Quando encerrar o programa o sistema dever� apresentar quantos
//n�meros foram avaliados, quantos foram considerados primos e quantos n�o foram.

#include<iostream>
using namespace std;
int main(int argc, char** argv)
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