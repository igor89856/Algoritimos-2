#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstdio>
using namespace std;

int fatorial(int n);
main() 
{
int v;
cout << "Informe um valor qualquer: ";
cin >> v;
cout << fatorial(v);
}
int fatorial(int n)
{
if(n == 1)
return 1;
else
return (n * fatorial(n-1));
}