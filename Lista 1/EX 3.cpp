#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
main(){
    srand (time(NULL));
    int nm,n,cont=0;
 	 cout << "ate que numero deve ser sorteado"<<endl;	   	
	 cin >> nm;
	 
	 nm= rand()%nm;
	 nm++;
	 do{
		 cout << "adivinhe o numero"<<endl;
		 cin>>n;
		 
		 if(n>nm)
		 {
		 	cout << "numero muito alto"<<endl;
		 	cont++;
		 }
		 
		 if(n<nm)
		 {
		 	cout << "numero muito baixo"<<endl;
		 	cont++;
		 }
		 
		 if(n==nm)
		 {
		 	cout <<  "vc acertou"<<endl;
		 }
		 
	 }while(n!=nm);
	 cout << "vc acerto em "<<cont<<"tentativas";
	 
	    
    
}    