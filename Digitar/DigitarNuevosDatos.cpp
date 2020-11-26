#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<conio.h>

using namespace std;

void Digitar();

int main(){
 ofstream archivo;
 string nombre_archivo, frase;
 char res;
 
 cout << "Ingrese el numero: ";
 getline(cin,nombre_archivo);
 nombre_archivo += ".txt";
 
 archivo.open(nombre_archivo.c_str(),ios::out);
 
 if(archivo.fail()){
  cout << "No se pudo abrir el archivo";
  exit(1);
 }
 
  string nombre, delito, tiempo, regimen;  

  cout << "\nIngrese el nombre: ";
  fflush(stdin);
  getline(cin,nombre);
  
  frase += '\n';
  
  
  
  cout << "\nIngrese el tipo de delito: ";
  fflush(stdin);
  getline(cin,delito);
  
  frase += '\n';
  
  

  cout << "\nIngrese el tipo de regimen: ";
  fflush(stdin);
  getline(cin,regimen);
  
  frase += '\n';
  
  


  cout << "\nIngrese el tiempo de condena: ";
  fflush(stdin);
  getline(cin,tiempo);
  
  frase += '\n';
  
  archivo << "Nombre del preso: "<< nombre<<endl;

  nombre += '\n';

  archivo << "Tipo de delito: "<< delito<<endl;


  delito += '\n';

  archivo << "Tipo de regimen: "<< regimen<<endl;

  regimen += '\n';

  archivo << "Tiempo de condena: "<< tiempo<<endl;

  tiempo += '\n';

 
  




 
 archivo.close();


 
 getch();
 return 0;
}