#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void digitar();
void lectura();

int main (){
    int NuevoDato;
    do{
        cout<<"Digite: \n1. Si desea ingresar nuevos datos \n2. Si desea hacer una busqueda \n3.salir"<<endl;
        cin>>NuevoDato;
        if(NuevoDato == 1){
            digitar();
        }else if(NuevoDato == 2){
            lectura();                   
        }else if(NuevoDato == 3){
            system("pause");
            return 0;
        }
    }while(true);
}

void digitar(){
    ofstream archivo;
    string nombrearchivo, nombre, delito, tiempo, regimen;
    cout << "Ingrese el numero: ";
    fflush(stdin);
    getline(cin,nombrearchivo);
    nombrearchivo += ".txt";
    archivo.open(nombrearchivo.c_str(),ios::out);
    if(archivo.fail()){
        cout << "No se pudo abrir el archivo";
        exit(1);
    }
    cout << "\nIngrese el nombre: ";
    getline(cin,nombre);
    cout << "\nIngrese el tipo de delito: ";
    getline(cin,delito);
    cout << "\nIngrese el tipo de regimen: ";
    getline(cin,regimen);
    cout << "\nIngrese el tiempo de condena: ";
    getline(cin,tiempo);
    archivo << "Nombre del preso: "<< nombre<<endl;
    archivo << "\nTipo de delito: "<< delito<<endl;
    archivo << "\nTipo de regimen: "<< regimen<<endl;
    archivo << "\nTiempo de condena: "<< tiempo<<endl;
    archivo.close();
}

void lectura(){
    ifstream archivo;
    string nombreTexto, texto;
    cout<<"Ingrese el numero del preso: ";
    fflush(stdin);
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