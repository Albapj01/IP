#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void divisores(int v){ //es la funcion a la cual llamamos
    for( int a=1; a>0; a++){ //for es un esquema condicional que actua como bucle
       if(v%a==0){ /*if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no lo cumple, se va directamente a la siguiente linea*/
          cout<<a<<endl; //es lo que nos devuelve la funcion
       }
    }
}
int main(){
    int n;
    cout<<"Introduzca un valor"<<endl;
    cin>>n;
    cout<<"Los divisores de "<<n<<" en orden ascendente son:"<<endl;
    divisores(n); //llama a la funcion que esta encima del main

    system("pause"); //esto es para que el programa no se acabe directamente
}

