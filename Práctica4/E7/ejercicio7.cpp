#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void Ndivisores(int v){ //es la funcion a la cual llamamos
    int a=0;
    for(int b=1; b<=v; b++){ //for es un esquema condicional el cual actua como bucle
         if(v%b==0){ /*if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no lo cumple, se va directamente a la siguiente linea*/
            a++;
         }
    }
     cout<<a<<endl; //esto es lo que nos devuelve al funcion
}

int main(){
    int n;
    cout<<"Introduzca un valor"<<endl;
    cin>>n;
    cout<<"El numero de divisores que contiene "<<n<<" es"<<endl;
    Ndivisores(n); //llama a la funcion que esta encima del main


    system("pause"); //esto es para que el programa no se acabe directamente
}

