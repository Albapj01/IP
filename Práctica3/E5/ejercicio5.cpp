#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int s=0, n=0;
    float d;
    while(d<30){ //while es una condicion que actua como bucle
             float a;
             cout<<"Introduzca un numero"<<endl;
             cin>>a;

             n++;
             s=s+a;

             d=s/(float)n; //el float añadido es para que el resultado salga con decimales y no solo con la parte entera
     }
     cout<<"La media es "<<d<<endl;
   
    system("pause"); //esto es para que el programa no se acabe inmediatamente
}

