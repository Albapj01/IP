#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
     int m, n;
     cout<<"Introduzca un numero"<<endl;
     cin>>m;
     for(int a=0; a<4; a++){ //for es una condicion que actua como bucle
           cin>>n;
           if(n<m){m=n;} /* if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no se cumple, se va directamente a la siguiente linea de codigo */
     }
     cout<<m<<" es el menor"<<endl;

    system("pause"); //esto es para que el programa no se acabe inmediatamente
}

