#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
float a,b,c;
cout<<"Introduzca las notas correspondientes para calcular la nota final"<<endl;
cout<<"Introduzca la nota de practicas"<<endl;
cin>>a;
cout<<"Introduzca la nota del parcial"<<endl;
cin>>b;
cout<<"Introduzca la nota del examen final"<<endl;
cin>>c;

float n,m,l;
n=0.25*a; // como las practicas valen el 25 por ciento de la nota (25/100)=0.25 y esto se multiplica con a mediante *
m=0.25*b;
l=0.5*c;

float x;
x=n+m+l; // la nota final es la suma de los tres porcentajes 

cout<<"La nota final es "<<x<<endl; 


    system("pause"); // esto es para que el programa no se acabe inmediatamente
}

