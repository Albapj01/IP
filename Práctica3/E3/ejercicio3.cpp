#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int N;
    cout<<"Itroduzca un numero"<<endl;
    cin>>N;

    int s=0;
    int a=1;
    
    while(a<=N){ //while es una condicion que actua como bucle
          if(N%a==0){ /* if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no se cumple, se va directamente a la siguiente linea de codigo */
             s++;
          }

          a++;

    }
    if(s==2){
          cout<<N<<" es un numero primo"<<endl;
    }
    else{
           cout<<N<<" no es un numero primo"<<endl;
    }

    system("pause"); //esto es para que el programa no se acabe directamente
}

