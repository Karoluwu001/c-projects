#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, e, f, resultado=0;
	
	
	cout<<"digite valor de a: "; cin>>a;
	cout<<"digite valor de b: "; cin>>b;
	cout<<"digite valor de c: "; cin>>c;
	cout<<"digite valor de d: "; cin>>d;
	cout<<"digite valor de e: "; cin>>e;
	cout<<"digite valor de f: "; cin>>f;
	
	resultado=(a+(b/c))/(d+(e/f));
	
	cout<<"\n el resutado es; "<<resultado<<endl;
	return 0;
}
