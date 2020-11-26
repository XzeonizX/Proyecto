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