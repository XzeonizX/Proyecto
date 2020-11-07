

#include <iostream>

using namespace std;

int main(){

    int Preso;
    int NumeroPreso;
        string NombreDelPreso1 = "Alphonse Gabriel Capone";
        string TipoDeDelito1 = "Evasion de impuestos";
        string Regimen = "Segundo grado";
        string Condena = "11 años de prision por el Gobierno Federal de los Estados Unidos";
                    // int TiempoDeCondena;

        string NombreDelPreso2;

    NumeroPreso = 2;
    NumeroPreso = 1;
    NumeroPreso = 3;
    NumeroPreso = 4;


    cout<<"Hola sea bienvenido a la base de datos de reclusos de un centro de detencion. "<<endl;
    cout<<"\nDigite el numero del preso que le gustaria saber la informacion. ";
    cin>>NumeroPreso;



    switch (NumeroPreso){
        case 1:
            cout<<"\nPreso numero 1: "<<endl;
            cout<<"\nNombre: "<<NombreDelPreso1<<endl;
            cout<<"\nTipo de delito: "<<TipoDeDelito1<<endl;
            cout<<"\nTipo de regimen penitenciario: "<<Regimen<<endl;
            cout<<"\nCondena: "<<Condena<<endl;
                    // cout<<"\nTiempo restante de la condena: "<<TiempoDeCondena<<endl;
            



            break;
        case 2:
            cout<<"\nEs el numero 2."<<endl;
            break;
        case 3:
            cout<<"\nEs el numero 3."<<endl;
            break;
        case 4:
            cout<<"\nEs el numero 4."<<endl;
            break;
        case 5:
            cout<<"\nEs el numero 5."<<endl;
            break;
        default:
            cout<<"\nNo está en el rango definido."<<endl;
            break;
    
        }






    return 0;
}

