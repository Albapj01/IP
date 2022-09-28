#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int N;
    cout<<"Introduzca un numero"<<endl;
    cin>>N;
    int s=0;
    for(int a=1; a<=N; a++){ //for es una condicional que actua como bucle
        if(N%a==0){ /* if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no se cumple, se va directamente al else */
           s++;
        }
    }
    if(s==2){
        cout<<N<<" es un numero primo"<<endl;
    }
    else{
         cout<<N<<" no es un numero primo"<<endl;
    } 
    system("pause"); //esto es para que el programa no se acabe directamente
}

