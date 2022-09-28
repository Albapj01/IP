#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

bool espar(int v){ //es la funcion a la cual llamamos
       bool res;
       if(v%2==0) {res=true;}
       else{res=false;}
       return res; //esto es lo que nos devuelve la funcion
}

int main(){
       int n;
       cout<<"Introduzca un valor"<<endl;
       cin>>n;
       bool ep=espar(n); //bool llama a la funcion que esta por encima del main, y devolviendonos un boleano
       if (ep==true){ /*if es un esquema condiconal que nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no lo cumple, se va directamente al else*/
            cout<<"El valor es par"<<endl;
       }
       else{
            cout<<"El valor no es par"<<endl;
       }
    system("pause"); //esto es para que el programa no se acabe directamente
}

