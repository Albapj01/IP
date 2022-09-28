#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
     int n;
     cout<<"Introduzca un numero"<<endl;
     cin>>n;
     cout<<"Los divisores de "<<n<<" en orden ascendente son:"<<endl;
     for(int d=1; d>0; d++){ //for es una condicion que actua como bucle
        if(n%d==0){ /* if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no se cumple, se va directamente a la siguiente linea de codigo */
          cout<<d<<endl;
        }
     }
     
    system("pause"); //esto es para que el programa no se acabe inmediatamente
}

