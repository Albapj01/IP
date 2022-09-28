#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    float area,radio;
    cout<<"Introduzca el valor del radio"<<endl;
    cin>>radio;
    area=radio*radio*3.1415;
    cout<<"El area es : "<<area<<endl;

//esto es para que el programa no se acabe inmediatamente

cin.ignore(); //borra los datos que hay en el buffer de entrada
   cin.get();//espera a pulsar un boton

}

