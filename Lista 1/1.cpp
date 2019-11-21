#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>

using namespace std;
struct cad
{
    string nome;
    int idade;
    float sal;
    int nfilhos;
    char sexo;
};

void leitura(cad x);
void mostra();
void mediam();



main()
{
    int menu = -1;
    cad x[500];
    do
    {
        system("cls");
        cout << "0 - Sair" << endl;
        cout << "1 - Incluir pessoa" << endl;
        cout << "2 - Mostrar dados do arquivo" << endl;
        cout << "3 - Media dos Salario de pessoas com sexo M" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
        case 0 :
            system("cls");
            cout << "Programa Finalizado.";
            break;
        case 1 :
            system("cls");
            leitura(x);
            getchar();
            break;
        case 2 :
            system("cls");
            mostra();
            getchar();
            break;
        case 3 :
            system("cls");
            mediam();
            getchar();
            break;
        };

    }
    while(menu != 0);
}

void leitura(cad x[1000])
{

    int i;
    ofstream escreve;
    escreve.open("aula.txt", ios::app);
    cout << "Digite seu nome: ";
    getline(cin, x[i].nome);
    fflush(stdin);

    cout << "Digite seu salario: ";
    cin >> x[i].sal;
    fflush(stdin);

    cout << "Digite o numero de filho: ";
    cin >> x[i].nfilhos;
    fflush(stdin);

    cout << "Informe o seu sexo: ";
    cin >> x[i].sexo;
    x[i].sexo=toupper(x[i].sexo);
    fflush(stdin);

    cout << "Informe a idade: ";
    cin >> x[i].idade;
    fflush(stdin);

    if(escreve.is_open())
    {
        escreve << "Nome digitado: " << x[i].nome << ";";
        escreve << " Idade: " << x[i].idade << ";";
        escreve << "Salario: "<< x[i].sal << ";";
        escreve << "Sexo: " << x[i].sexo <<";";
        escreve << "Numero de Filhos: " << x[i].nfilhos << "\n";
        cout << "Arquivo gerado com sucesso\n\n";
    }
    else
        cout << "Erro ao abrir o arquivo";
    escreve.close();
}

void mostra()
{
    ifstream ler("aula.txt", ios::in);
    if(ler.good())
    {
        char c;
        while(ler.get(c))
            cout << c;
    }
    else
        cout << "Erro ao abrir o arquivo";
    ler.close();
}

void mediam(cad x[])
{
    int i;
    ifstream ler("aula.txt", ios::in);
    float media;
    if(ler.good())
    {
        char c[100];
        while(!ler.fail())
        {
            ler.getline(c,100);
            if(x[i].sexo=='M')
            {
                cout<< "dd";
            }
        }
    }
    else
        cout << "Erro ao abrir o arquivo";
    ler.close();
}
