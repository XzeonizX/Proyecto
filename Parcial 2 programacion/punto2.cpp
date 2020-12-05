#include <iostream>

using namespace std;

struct Estudiante{
    string nombre;
    int edad;
    int identidad;
    int semestre;
};

int main(){
    Estudiante estudiante[2];
    //Estudiante 1
    estudiante[0].nombre = "Nicolas Cedeno";
    estudiante[0].edad = 18;
    estudiante[0].identidad = 1004823475;
    estudiante[0].semestre = 3;
    //Estudiante 2
    estudiante[1].nombre = "Sebastian Perez";
    estudiante[1].edad = 20;
    estudiante[1].identidad = 1002735461;
    estudiante[1].semestre = 5;
    //Imprimiendo estudiantes
    for(int i=0; i<2;i++){
        cout<<"\nNombre: "<<estudiante[i].nombre<<endl;
        cout<<"Edad: "<<estudiante[i].edad<<endl;
        cout<<"Documento de identidad: "<<estudiante[i].identidad<<endl;
        cout<<"Semestre: "<<estudiante[i].semestre<<endl;
    }
    return 0;
}