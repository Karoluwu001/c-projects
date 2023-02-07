#include<iostream>

using namespace std;

int main(){
	
	int n1,n2,n3,n4;
	
	cout<<"Digite primer numero: "; cin>>n1;
	cout<<"Digite segundo numero: "; cin>>n2;
	cout<<"Digite tercer numero : "; cin>>n3;
	
	cout<<"\nLos numeros introducidos son: "<<endl;
	cout<<n1<<endl;
	cout<<n2<<endl;
	cout<<n3<<endl;
	
	cout<<"\nDigite un cuarto numero: "; cin>>n4;
	
	if(n4==n1){
		cout<<"El numero digitado coincide con: "<<n1;
	}
	else if(n4==n2){
		cout<<"El numero digitado coincide con: "<<n2;
	}
	else if(n4==n3){
		cout<<"El numero digitado coincide con: "<<n3;
	}
	else{
		cout<<"El numero digitado no coincide con ninguno digitado con anterioridad.";
	}
	
	return 0;
}
