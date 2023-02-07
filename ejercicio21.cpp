#include<iostream>

using namespace std;

int main(){
	
	int mes;
	
	
	cout<<"Digite un mes del año: ";
	cin>>mes;
	
	switch(mes){
		case 1:cout<<"El mes de enero"; break; 
		case 2:cout<<"El mes de febrero"; break; 
		case 3:cout<<"El mes de marzoo"; break; 
		case 4:cout<<"El mes de abril"; break; 
		case 5:cout<<"El mes de mayo"; break; 
		case 6:cout<<"El mes de junio"; break; 
		case 7:cout<<"El mes de julio"; break; 
		case 8:cout<<"El mes de agosto"; break; 
		case 9:cout<<"El mes de septiembre"; break; 
		case 10:cout<<"El mes de octubre"; break; 
		case 11:cout<<"El mes de noviembre"; break; 
		case 12:cout<<"El mes de diciembre"; break; 	
		default: cout<<"no es valido";break;
}
	return 0;

	}
