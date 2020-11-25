#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

void lectura();

int main(){
 lectura();
 
 system("pause");
 return 0;
}
void lectura(){
 ifstream archivo;
 string nombreTexto, texto;
 
 cout<<"Busqueda de un archivo de texto para su lectura.\n\n";
 cout<<"Ingrese el nombre o ubicacion del archivo: ";
 getline(cin,nombreTexto);
 
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