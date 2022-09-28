#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int dia;
    cout<<"Introduzca un dia de la semana [1,7]"<<endl;
    cin>>dia;
    if ( (dia>=1) && (dia<=7) ){ /* if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no lo cumple se va directamente al else, && es un operador logico que significa y */
       if ( (dia>=1) && (dia<=5) ){ 
              cout<<"Es laborable"<<endl;
       }
       else{
              cout<<"Es fin de semana"<<endl;
       }
    }
    else{
       cout<<"No es un dia valido"<<endl;
    }

    system("pause"); // esto es para que el programa no se acabe inmediatamente
}

