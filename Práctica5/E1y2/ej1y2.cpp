#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void lee(float v1[], int n){ //pide los valores del vector por teclado
      for(int a=0; a<n; a++){ //for es un esquema condicional que actua como bucle
          cin>>v1[a];
      }
}

void imprime(float v1[], int n){ //imprime los elementos del vector por pantalla
      for(int i=0; i<n; i++){
            cout<<v1[i]<<","<<endl;
      }
      cout<<endl;
}

int main(){
     cout<<"Introduzca diez valores para el vector"<<endl;
     float v[10];
     lee(v,10); //llama a esta funcion 
     imprime(v,10); //llama a esta funcion

    system("pause"); //esto es para que el programa no se acabe directamente
}

