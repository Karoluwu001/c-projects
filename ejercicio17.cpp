#include<iostream>
using namespace std;

int main(){
	char letra;
	
	cout<<"digite un caracter: "; cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"\n Es una vocal minuscula";break;	
		default:cout<<"\n No es una vocal minuscula";break; 
	
	}
	
		switch(letra){	
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"\n Es una vocal MAYUSCULA";break;
		default: cout<<"\n No es una vocal";break;	
	return 0;
}
}
