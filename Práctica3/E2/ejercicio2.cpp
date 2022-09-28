#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int n=0, s=1;
    cout<<"Introduzca un numero"<<endl;
    while(s>=0){ //while es una condicion que actua como bucle
          cin>>s;
          if(s>n){n=s;} /* if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no se cumple, se va directamente a la siguiente linea de codigo */
    }

     cout<<n<<" es el mayor"<<endl;
                    
 
    system("pause"); //esto es para que el programa no se acabe inmediatamente
}

