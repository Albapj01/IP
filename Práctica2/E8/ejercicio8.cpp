#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int n, a, b=0, c=1, d=2;
    cout<<"Introduzca un numero hasta el que llegar"<<endl; /* este programa imprimira los n primeros terminos de la sucesion de fibonacci */
    cin>>n;

    cout<<"Los terminos son:"<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    while(n>d){ //while es una condicional que actua como bucle
         d++;
         a=c+b;
         cout<<a<<endl;
         b=c;
         c=a;
   }

    system("pause"); //esto es para que el programa no se acabe directamente
}

