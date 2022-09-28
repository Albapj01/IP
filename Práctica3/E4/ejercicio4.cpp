#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int n, d;
    cout<<"Introduzca un numero"<<endl;
    cin>>n;
    d=1;
    cout<<"Los divisores de "<<n<<" en orden ascendente son:"<<endl;
    while(d>0){ //while es una condicion que actua como bucle
          if(n%d==0){ /* if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no se cumple, se va directamente a la siguiente linea de codigo */
                cout<<d<<endl;
          }
          d++;
    }
    system("pause"); //esto es para que el programa no se acabe inmediatamente
}

