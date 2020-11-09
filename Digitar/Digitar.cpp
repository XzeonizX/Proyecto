#include <iostream>
#include <conio.h>

using namespace std;

int main (){

    int NuevoDato, Numero;
    cout<<"Digite: 1. Si desea ingresar nuevos datos 2. Si desea hacer una busqueda ";
    cin>>NuevoDato;
    if (NuevoDato == 1){
        int Numero;
        cout<<"\nDigite el numero que quiere asignar";
        cin>>Numero;
        } else if (NuevoDato == 2){
                          
            int dato;
            cout<<"digite el numero que le gustaria buscar";
            cin>>dato;


        }
        




    getch ();
    return 0;

}