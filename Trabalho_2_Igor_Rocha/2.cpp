#include <iostream>
#include <clocale>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
struct alunos
{
    int matricula;
    string nome;
    int n1;
    int n2;
    int n3;
    float m;
};

void leitura(alunos *a, int **i)
{
    **i += 1;

    a[**i].matricula = **i;

    cout<<"Informe o nome do aluno: ";
    getline(cin,a[**i].nome);

    cout<<"Informe a nota 1: ";
    cin>>a[**i].n1;

    cout<<"Informe a nota 2: ";
    cin>>a[**i].n2;

    cout<<"Informe a nota 3: ";
    cin>>a[**i].n3;

}

void mostra(alunos *a, int **i)
{
    for(int x = 1; x <= **i; x++)
    {
        cout<<"Matricula: "<<a[x].matricula<<endl;
        cout<<"Nome: "<<a[x].nome<<endl;
        cout<<"Nota 1: "<<a[x].n1<<endl;
        cout<<"Nota 2: "<<a[x].n2<<endl;
        cout<<"Nota 3:"<<a[x].n3<<endl;
        cout<<"-----------------------------------------------------------------------";
    }
}

void consulta(alunos *a, int **i)
{
    int x;
    cout<<"Informe a Matricula: ";
    cin>>x;

    if(x > **i or x <= 0)
    {
        cout<<"Aluno não existe."<<endl;
    }
    else if (x <= **i)
    {
        cout<<"Matricula: "<<a[x].matricula<<endl;
        cout<<"Nome: "<<a[x].nome<<endl;
        cout<<"Nota 1: "<<a[x].n1<<endl;
        cout<<"Nota 2: "<<a[x].n2<<endl;
        cout<<"Nota 3: "<<a[x].n3<<endl;
        cout<<"---------------------------------------------------------------------";
    }
    getchar();
}

void media(alunos *a, int **i)
{
    for(int x = 1; x <= **i; x++)
    {
        a[x].m=(a[x].n1+a[x].n2+a[x].n3)/3;

    }
    for(int x = 1; x <= **i; x++)
    {
        cout<<"Matricula: "<<a[x].matricula<<endl;
        cout<<"Nome: "<<a[x].nome<<endl;
        cout<<"Nota 1: "<<a[x].n1<<endl;
        cout<<"Nota 2: "<<a[x].n2<<endl;
        cout<<"Nota 3:"<<a[x].n3<<endl;
        cout<<"Media:"<<a[x].m<<endl;
        cout<<"------------------------------------------------------------------------";
    }

}

void aprovados(alunos *a, int **i)
{
    for(int x = 1; x <= **i; x++)
    {
        if(a[x].m<6 or a[x].m == 6)
        {
            cout<<"Nome: "<<a[x].nome<<endl;
            cout<<"Media:"<<a[x].m<<endl;
            cout<<"------------------------------------------------------------------------";
            system("pause");
        }
    }

}
main()
{
    setlocale(LC_ALL, "portuguese");
    alunos *v = new alunos[30];
    int *i = new int(0);
    int menu = -1;
    do
    {
        system("cls");
        cout<<"0 - Sair"<<endl;
        cout<<"1 - Cadastrar Alunos"<<endl;
        cout<<"2 - Listar Alunos"<<endl;
        cout<<"3 - Consultar aluno pela Matricula"<<endl;
        cout<<"4 - Calcular media "<<endl;
        cout<<"5 - Mostrar aprovados"<<endl;
        cout<<"Sua escolha: ";
        cin>>menu;
        fflush(stdin);
        if(menu == 5)
        {
                        system("cls");
            aprovados(v,&i);
        }


        switch(menu)
        {
        case 0:
            system("cls");
            cout<<"Programa finalizado.";
            getchar();
            break;
        case 1:
            system("cls");
            leitura(v, &i);
            break;
        case 2:
            system("cls");
            if(*i <= 0)
            {
                cout<<"Não existem dados cadastrados.";
            }
            else
            {
                cout<<"Dados cadastrados:"<<endl;
                mostra(v, &i);
            }
            getchar();
            break;
        case 3:
            system("cls");
            if(*i <= 0)
            {
                cout<<"Não existem dados cadastrados.";
            }
            else
            {
                consulta(v, &i);
            }
            getchar();
            break;
        case 4:
            system("cls");
            if(*i <= 0)
            {
                cout<<"Não existem dados cadastrados.";
            }
            else
            {
                media(v, &i);
            }
            getchar();
            break;

        }
    }
    while(menu != 0);
}

