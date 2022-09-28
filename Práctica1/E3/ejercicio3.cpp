#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath> // incluye la libreria matematica
using namespace std;

int main(){
    float x;
    cout<<"Introduzca un numero para calcular su raiz"<<endl;
    cin>>x;
    if (x>=0){
            float resultado;
            resultado=sqrt(x); // la raiz se calcula mediante sqrt
            cout<<"La raiz de "<<x<<" es "<<resultado<<endl;
    }
    else{
           cout<<"No se puede calcular la raiz"<<endl;
    }
    system("pause"); //esto es para que el programa no se acabe inmediatamente
}

