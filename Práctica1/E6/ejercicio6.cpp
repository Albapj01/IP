#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    float a,b,c,d;
    cout<<"Introduzca cuatro numeros para calcular su media"<<endl;
    cout<<"Introduzca el primer numero"<<endl;
    cin>>a;
    cout<<"Introduzca el segundo numero"<<endl;
    cin>>b;
    cout<<"Introduzca el tercer numero"<<endl;
    cin>>c;
    cout<<"Introsuzca el cuarto numero"<<endl;
    cin>>d;

    float resultado;
    resultado=(a+b+c+d)/4;  /* 4 es el numero total de cifras que utilizamos para hacer la media y esta se calcula con la suma de los valores que nos interesan para hacer la media y dividiendo esa suma por el numero de valores sumados */
    cout<<"La media es "<<resultado<<endl; 

    system("pause"); // esto es para que el programa no se acabe inmediatamente
}

