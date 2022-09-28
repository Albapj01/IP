#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Introduzca un numero"<<endl; /*el programa sumara todos los numeros impares hasta el numero introducido */
    cin>>n;

    int sum=0;
    int i=1;
    while(i<=n){ //while es una condicion que actua como bucle
            sum+=i;
            i+=2;
    }
    
    cout<<"El resultado es: "<<sum<<endl;

    system("pause"); //esto es para que el programa no se acabe directamente
}

