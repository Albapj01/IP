#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime> //es necesario para que funcione el programa con srand(time(0))
using namespace std;

int main(){
    srand(time(0));
    int  secreto=rand()%1000; //guarda en secreto un numero entre 0 y 1000
    int n;
    while(n!=secreto){ //while es una funcion que actua como bucle
           cout<<"Introduzca un numero entre 0 y 1000"<<endl;
           cin>>n;
           if(n<secreto){ /* if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no lo cumple, se va directamente al else */
                     cout<<"El numero introducido es menor que el secreto"<<endl;
           }
           else if(n>secreto){ /* el else if tiene la misma funcion que el if   else pero este ultimo se expresa de una forma mas compleja que el else if */
                     cout<<"El numero introducido es mayor que el secreto"<<endl;
           }
     }
     cout<<"El numero era "<<secreto<<endl;
           
    system("pause"); //esto es para que el programa no acave directamente
}

