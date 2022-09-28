#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

bool esperfecto(int v){ //esta es la funcion a la cual llamamos
     bool res;
     int sd=0;
     for(int a=1; a<v; a++){ //for es un esquema condicional que actua como bucle
          if(v%a==0) {sd+=a;} /*if es un esquma condicional , el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no lo cumple, se va directamente a la siguiente linea*/
     }
     if(sd==v){res=true;} 
     else{res=false;}
     return res; //esto es lo que nos devuelve la funcion
}

int main(){
    int n;
    cout<<"Introduzca un valor"<<endl;
    cin>>n;
    bool ep=esperfecto(n); //llama la funcion que esta encima del main
    if(ep==true){
         cout<<"El numero es perfecto"<<endl;
    }
    else{
         cout<<"El numero no es perfecto"<<endl;
    }

    system("pause"); //esto es para que el programa no se acabe directamente
}

