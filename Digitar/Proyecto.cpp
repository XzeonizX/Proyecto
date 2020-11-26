#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<conio.h>

using namespace std;

void Digitar();

void lectura();

int main (){

    int NuevoDato, Numero;
    
    do{
    cout<<"Digite: \n1. Si desea ingresar nuevos datos \n2. Si desea hacer una busqueda \n3.salir"<<endl;
    cin>>NuevoDato;
    if(NuevoDato == 1){
        Digitar();

    }else if(NuevoDato == 2){
          lectura();                   
            
    }else if(NuevoDato == 3){
        getch();
        return 0;
    }

    }
    while(true);


}

void Digitar(){
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
}

void lectura(){
 ifstream archivo;
 string nombreTexto, texto;
 
 cout<<"Ingrese el numero del preso seguido de .txt: ";
 getline(cin,nombreTexto);
 nombreTexto += ".txt";

 archivo.open(nombreTexto.c_str(),ios::in);
 
 if(archivo.fail()){
  cout<<"\nNo se pudo abrir el archivo.";
  exit(1);
 }
 cout<<"\n";
 
 while(!archivo.eof()){
  getline(archivo,texto);
  cout<<texto<<endl;
 }
 archivo.close();
}