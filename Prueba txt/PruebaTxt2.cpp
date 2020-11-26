#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<conio.h>

using namespace std;

int main(){
 ofstream archivo;
 string nombre_archivo, frase;
 char res;
 
 cout << "Ingrese el numero: ";
 getline(cin,nombre_archivo);
 nombre_archivo += ".txt";
 
 archivo.open(Base.txt,ios::app);
 
 if(archivo.fail()){
  cout << "No se pudo abrir el archivo";
  exit(1);
 }
 
  string nombre, delito, tiempo, regimen;

  cout << "\nIngrese el nombre: ";
  fflush(stdin);
  getline(cin,frase);
  
  frase += '  ';
  
  archivo << frase;
  
  cout << "\nIngrese el tipo de delito: ";
  fflush(stdin);
  getline(cin,frase);
  
  frase += '  ';
  
  archivo << frase;

  cout << "\nIngrese el tipo de regimen: ";
  fflush(stdin);
  getline(cin,frase);
  
  frase += '  ';
  
  archivo << frase;


  cout << "\nIngrese el tiempo de condena: ";
  fflush(stdin);
  getline(cin,frase);
  
  frase += '  ';
  
  archivo << frase;

  




 
 archivo.close();
 
 getch();
 return 0;
}