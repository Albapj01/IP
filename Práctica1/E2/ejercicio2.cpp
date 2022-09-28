#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
     double a,b;
     cout<<"Introduzca un angulo expresado en grados para obtener su equivalente en radianes"<<endl;
     cin>>a;
     
     b=a*(2*3.1415)/360; //  * es una multiplicacion, mientras que / es una division
     cout<<a<<" grados son "<<b<<"radianes"<<endl;

    system("pause"); // esto es para que el programa no se acabe inmediatamente
}

