#include <iostream>
#include <clocale>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

main()
{
    srand(time(NULL));
    int aux=0;
    int i=0;
    int *px = new int;
    cout << "Informe o o tamanho do vetor"<<endl;
    cin>>*px;
    int *pv = new int [*px];
    pv = pv;
    int *paux =new int [*px];
    paux = paux;
    while(i != *px)
    {
        *pv = rand() % *px+1;

        if(*pv==*pv)
        {
            *paux=*pv;
        }

        if(*pv != *pv)
        {
            cout<<*pv<<"|";
        }
        cout<<*pv<<"|";
        pv++;
        i++;

    }

cout<<"\n";
    cout<<"A moda :"<<*paux;









}
