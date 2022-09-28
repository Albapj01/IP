#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int fact(int v){ //es la funcion a la cual llama la funcion combinaciones
    int res=1;
    for(int a=v; a>0; a--){ //for es un esquema condicional que actua como bucle
        res*=a;
    }
    return res; //esto es lo que nos devuelve la funcion
}

int combinaciones(int n, int k){ //es la funcion a la cual llamamos en le main
    int comb=fact(n)/(fact(k)*fact(n-k));
    return comb;
}


int main(){
    double n,k;
    cout<<"Introduzca n y k"<<endl;
    cin>>n>>k;
    cout<<"Las combinaciones son:"<<combinaciones(n, k)<<endl; /*es la funcion a la cual llamamos encima del main*/

    system("pause"); //esto es para que el programa no se acabe directamente
}

