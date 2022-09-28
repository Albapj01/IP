#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Introduzca un valor para a"<<endl;
    cin>>a;  

    int b=1;
    int fact=1;

    while(b<=a){ //while es una condicion que actua como bucle
        fact=fact*b; 
        b++;
    }
    
    cout<<"El factorial de "<<a<<" es "<<fact<<endl;
    
         

    system("pause"); //esto es para que el programa no se acabe directamente
}

