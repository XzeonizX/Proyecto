#include <iostream>

using namespace std;

int factorial(int x){
    if(x<2){
        return 1;
    }else{
        return x*factorial(x-1);
    }
}
int combinatorial(int x,int y){
    if(y==1){
        return x;
    }else{
        if(x==y){
            return 1;
        }else{
            return factorial(x)/(factorial(y)*factorial(x-y));
        }
    }
}
int main(){
    int n=0, m=0, suma=0;
    cout<<"Ingrese la fila desde la cual quiere que inicie: ";
    cin>>m;
    cout<<"\nIngrese la fila donde quiere que termine: ";
    cin>>n;
    cout<<"\n";
    for(int i=m; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<combinatorial(i,j)<<"  ";
            suma=suma+combinatorial(i,j);
        }
        cout<<endl;
    }
    cout<<"La suma es: "<<suma<<endl;
    return 0;
}