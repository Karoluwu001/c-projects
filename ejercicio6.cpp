#include <iostream>

 using namespace std;
 
 int main (){
 	
 //Variables 
 
 float Alu1,Alu2,Alu3,Alu4, Media;
 
 //INGRESAR LA CALIFICACION DE CADA ALUMNO
 
 cout<<"Ingrese la calificacion Final Del Alumno 1:"; cin>>Alu1;
cout<<"Ingrese la calificacion Final Del Alumno 2:"; cin>>Alu2;
 cout<<"Ingrese la calificacion Final Del Alumno 3:"; cin>>Alu3;
  cout<<"Ingrese la calificacion Final Del Alumno 4:"; cin>>Alu4;
  
 //Calculando 
 
  Media=(Alu1+Alu2+Alu3+Alu4)/4;
  
//imrpimir resultado

cout<<"La Media Final es:"<<Media<<endl;  
  
  return 0;
  
  
 }
