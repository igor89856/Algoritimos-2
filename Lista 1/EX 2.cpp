//Escrever um programa que lê um número inteiro. Mostrar se o número é ou não primo.
//Número primo é aquele que é divisível por 1 e por ele mesmo. O sistema deverá permitir o teste
//com N números, apresentando o resultado e solicitando se o usuário deseja avaliar outro valor
//ou encerrar o programa. Quando encerrar o programa o sistema deverá apresentar quantos
//números foram avaliados, quantos foram considerados primos e quantos não foram.

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