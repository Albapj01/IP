#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
      int n, r;
      cout<<"Introduzca un numero"<<endl; /*el programa calculara la suma de todos los numeros mayores que 0 que llegara hasta el numero introducido */
      cin>>n;
 
      r=0;

      while(n>0){ //while es una condicion que actua como bucle
         r=r+n;
         n--;
      }

      cout<<"El resultado es "<<r<<endl;

    system("pause"); //esto es para que el programa no acabe directamente
}

