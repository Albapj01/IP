#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
     int n, d;
     cout<<"Introduzca un numero"<<endl;
     cin>>n;
     d=1;
     cout<<"Los divisores de "<<n<<" en orden ascendente son:"<<endl;
     do{ //do while es una condicion que actua como bucle
          if(n%d==0){ /* if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no lo cumple, se va directamente a la siguiente linea */
             cout<<d<<endl;
          }
          d++;
     }while(d>0);

    system("pause");
}

