#include<iostream>

using namespace std;

int main(){

	int x,y,aux;
	
	cout<<"Digite el valor de X:"; cin>>x;
	cout<<"Digite el valor de Y:"; cin>>y;
/*

y=5

x=10

*/

	aux=x;
	x=y;
	y=aux;
	
	cout<<"\nEl nuevo valor de x es:"<<x<<endl;
	cout<<"\nEl nuevo valor de y es:"<<x<<endl;

return 0;

}
