#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
bool esprimo(int v){ //es la funcion a la cual llamamos
        bool res;
        int s=0;
        for(int a=1; a<=v; a++){ //for es un esquema concional que actua como bucle
              if(v%a==0){
                 s++;
              }
        }
        if(s==1 || s==2){res=true;}
        else {res=false;}
        return res; //esto es lo que nos devuelve la funcion
}

int main(){
      int n;
      cout<<"Introduzca un numero"<<endl;
      cin>>n;
      bool ep=esprimo(n); //bool llama a la funcion que esta por encima del main, y nos devuelve un boleano
      if(ep==true){ /*if es un esquema condicional que nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no lo cumple, se va directamente al else*/
           cout<<"Es un numero primo"<<endl;
      }
      else{
           cout<<"No es un numero primo"<<endl;
      }

    system("pause"); //esto es para que el programa no se acabe directamente
}

