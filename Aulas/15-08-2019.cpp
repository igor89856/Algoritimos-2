#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstdio>
using namespace std;
void leitura(int mat[][5])
{
	int i, x;
	srand(time(NULL));
	for(i = 0; i < 5; i++)
	{
		for(x = 0; x < 5; x++)
		{
			mat[i][x] = rand() % 100;
		}
	}
}

void mostra(int mat[][5])
{
	 for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            cout<<mat[i][j]<<"\t ";
        }
        cout<<endl;
    }
	
}

void mostra_dp(int mat[][5])
{
	 for(int i = 0;i<5;i++)
	 {
        for(int j = 0;j<5;j++)
		{
			if(i==j)
            cout<<mat[i][j]<<"\t ";
        }
        cout<<endl;
    }
}

int main()
{
	int a[5][5],e=-1,flag=0;
	
	do
	{
		system("cls");
		
		cout<<"1 gerar matriz"<<endl;
		cout<< "2 mostrar matris "<<endl;
		cout << "3 mostrar diagonal principal"<< endl;
		cout << "0 sair"<<endl;
		cin >> e;
		
		switch(e)
		{
		case 1:
			leitura(a);
			cout<<"matriz gerada"<< endl;
			flag = 1;
			system("pause");
			break;
		case 2:
			if(flag==0)
			{
				cout<< "deve gerar uma matriz primeiro"<<endl;
			}
			else
			{
				mostra(a);
			}
			system("pause");
			
			break;
		case 3:
			if(flag==0)
			{
				cout<< "deve gerar uma matriz primeiro"<<endl;
			}
			else
			{
				mostra_dp(a);
			}
			system("pause");
			break;
		case 0:
			cout <<" programa finalizado "<<endl;
			break;
		
		default:
			cout << " opcao invalida"<< endl;
			break;
		}
		
	}while(e!=0);
	
}

