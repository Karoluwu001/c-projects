#include<iostream>

using namespace std;

int main(){
	int n1, n2, n3;
	
	cout<<"Digite tres numeros: ";
	cin>>n1>>n2>>n3;
	
	
	if(n1==n2==n3){
		
		cout<<"los 3  numeros son iguales";
	}
	else if(n1>n2>n3){
		
		cout<<"El mayor es:"<<n1;
	}
	else{
		cout<<"el mayor es: "<<n2;
	}
	
	return 0;
}
