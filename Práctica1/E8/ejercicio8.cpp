#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
     float a,b,c;
     cout<<"Introduzca tres valores para ver cual es el mayor"<<endl;
     cout<<"Introduzca el primer numero"<<endl;
     cin>>a;
     cout<<"Introduzca el segundo numero"<<endl;
     cin>>b;
     cout<<"Introduzca el tercer numero"<<endl;
     cin>>c;

    if ( (a>=b) && (a>=c) ){ /* if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no se cumple, se va directamente al else,  && es un operador logico que significa y */
       cout<<a<<" es el mayor"<<endl; 
       }
       else if ( (b>=a) && (b>=c) ){ /* el else if tiene la misma funcion que el if   else pero este ultimo se expresa de una forma mas compleja que el else if */
              cout<<b<<" es el mayor"<<endl;
              } 
    else{
       cout<<c<<" es el mayor"<<endl; 
    }

    system("pause"); // esto es para que el programa no se acabe inmediatamente
}

