#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
     int n;
     cout<<"Introduzca un numero"<<endl;
     cin>>n;

     int sum=0;
     while(n>0){ //while es una condicion que actua como bucle
           if ( (n%2==0) || (n%3==0) ){
                sum=sum+n;
           }

           n--;

      }
      cout<<"La suma de los divisores por 2 o 3 es "<<sum<<endl;

    system("pause"); //esto es para que el programa no se cierre directamente
}

