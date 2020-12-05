#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void contador(int *pA, int N, int n){
	int x=0,l=0;
	for(int i=0; i<N; i++){
		if(n == pA[i]){
			x++;
			l = pA[i];
		}
	}
	if(x>1){
		cout<<"\nEl numero "<<l<<" se repite "<<x<<" veces"<<endl;
	}
}
void borrar(int *pA, int N, int n){
	for(int i=0; i<N; i++){
		if(n == pA[i]){
			pA[i] = 0;
		}
	}
}
int main(){
	int N = 10, n;
    cout<<"Ingrese el valor de N: ";
    cin>>N;
	int V[N*N];
	srand(time(0));
	for (int i=0; i<N*N; i++){
		V[i] = 1+rand()%10;
		cout<<V[i]<<"  ";
	}
	cout<<endl;
	for (int i=0; i<N*N; i++){
		n = V[i];
		if(n!=0){
			contador(&V[0], N*N, n);
			borrar(&V[0], N*N, n);
		}
	}
	cout<<endl;
	return 0;
}