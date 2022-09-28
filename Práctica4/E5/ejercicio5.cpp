#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

bool esprimo(int v){ //es la funcion a la cual llamamos en la funcion primos
     bool res;
     int s=0;
     for(int a=1; a<=v; a++){
          if(v%a==0){s++;} /*if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no lo cumple, se va directamente a la siguiente linea*/
     }
     if((s==1) || (s==2)){res=true;} // || es una expresion logica
     else {res=false;}
     return res; //es lo que nos devuelve la funcion
}
void primos(int n){ //es la funcion a la cual llamamos dentro del main
     int b=0;
     int c=1;
     while(b!=n){ //es un esquema condicional que actua como bucle
         if(esprimo(c)){
            b++;
            cout<<c<<endl;
         }
         c++;
     }
}

int main(){
     int n;
     cout<<"Introduce un valor"<<endl;
     cin>>n;
     cout<<"Los "<<n<<" valores primos son:"<<endl;
     primos(n); //llama a la funcion que esta encima del main

    system("pause"); //esto es para que el programa no se acabe directamente
}

