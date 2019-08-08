//- Escrever um programa que gere dinamicamente um vetor A[5], sem números repetidos e
//menores que 100, mostre o vetor gerado na tela, ordenar o vetor em ordem crescente e
//apresentar novamente na tela.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
using namespace std;

int main()
{
	srand(time(NULL));
	int a[5],i,j,aux=0;
	
	for(i=0;i<5;i++)
	{
		a[i]= rand()%100;	
		cout << a[i] << endl;
		
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==aux)
		{
			a[i]=rand()%100;
		}
		aux++;	
		
	}
	for( i = 0;i<5;i++){
        for( j = i+1;j<5;j++){
            if(a[i]>a[j]){
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
    cout<< "\n\n";
    for(i=0;i<5;i++)
	{
		cout << a[i]<<endl;
	}
		
	
	return 0;
}