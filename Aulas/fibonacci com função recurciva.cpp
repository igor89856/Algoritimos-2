#include <iostream>
using namespace std;
int fibonacci(int pos)
 {
	if (pos==0)
	{
		return 0;
	}
	if (pos==1 or pos==2)
	{
		return 1;
	}
	else
	{
		return fibonacci(pos-1)+fibonacci(pos-2);
	}
		
}
int main() 
{
	double termos,i;
	cout << "Quantos termos gostaria de ver?" << endl;
	cin >> termos;
	for (i=0;i<=termos;i++)
	{
		cout << fibonacci(i) << ",";
	}
	return 0;
}