#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Introduzca un numero para saber si este es par o no"<<endl;
    cin>>a;
    
    if ( a%2 ==0 ) { /* if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no lo cumple se va directamente al else, por otro lado, ponemos == y no = debido a que si solo pones un igual, el valor obtenido de a%2 cambia y pasa a ser 0 , mientras que si añadimos == solo expresamos que si llegara a ser igual a 0 ocurriria esto, pero en ningun momento cambia el valor de este */
        cout<<"Es par"<<endl;
    }
    else{
        cout<<"Es impar"<<endl;
    }
    

    system("pause"); // esto es para que el programa no se acabe inmediatamente
}

