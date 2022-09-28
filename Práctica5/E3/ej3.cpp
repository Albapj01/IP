#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

void fijaValorAleatorio(int v[],int n,int max){ //pone valores aleatorios a los elementos del vector
      for(int a=0; a<n; a++){ //for es un esquema condicional que actua como bucle
           v[a]=rand()%(max+1); //genera un numero aleatorio
           cout<<"v["<<a<<"]="<<v[a]<<endl;
      }
      cout<<endl;
}

int main(){
     srand(time(0)); //inicializa el generador de numeros aleatorios
     int v[10];
     fijaValorAleatorio(v,10,100); //llama a la funcion

    system("pause"); //esto es para que el programa no se acabe directamente
}

