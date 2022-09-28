#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void factorial(int v){ //es la funcion a la cual llamamos
    int fact=1;
    for(int b=1; b<=v; b++){ //for es un esquema condicional que actua como bucle
       fact=fact*b;
    }
    cout<<fact<<endl; //esto es lo que nos devuelve la funcion
}

int main(){
    int n;
    cout<<"Introduzca un valor"<<endl;
    cin>>n;
    cout<<"Su factorial es:"<<endl;
    factorial(n); //llama a la funcion que esta encima del main

    system("pause"); //esto es para que el programa no se acabe directamente
}

