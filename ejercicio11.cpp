/* LA SENTENCIA IF
	
	if(condicional){
	instrucciones 1;
}

else{ instrucciones 2;
}
*/

#include<iostream>

using namespace std;

int main(){
	int numero, dato=5;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if (numero >= dato){
		cout<<"El numero es mayor  o igual que 5";
		
	}
	
	
	else{
		
		cout<<"El numero es menor a 5"; 
	}
	return 0;
}
