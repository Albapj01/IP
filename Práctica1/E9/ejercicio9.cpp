#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int mes;
    cout<<"Introduzca un numero del 1 al 12 correspondiendo cada uno a un mes del año para ver cuantos dias tiene ese mes"<<endl; // el 1 corresponde a enero, el 2 a febrero, y asi sucesivamente
    cin>>mes;
    if ( (mes==1) || (mes==3) || (mes==5) || (mes==7) || (mes==8) || (mes==10) || (mes==12) ){ /* if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no lo cumple, se va directamente al else, por otro lado, ponemos == y no = debido a que si solo pones un igual, el valor de mes cambia y pasa a ser el valor indicado, mientras que si añadimos == solo expresamos que si llegara a ser igual al valor indicado ocurriria esto, pero en ningun momento cambia el valor de mes */
          cout<<"Este mes tiene 31 dias"<<endl;
    }
    else if ( (mes==4) || (mes==6) || (mes==9) || (mes==11) ){ /* el else if tiene la misma funcion que el if    else prero este ultimo se expresa de una forma mas compleja que el else if */
           cout<<"Este mes tiene 30 dias"<<endl;
    }
    else{
           cout<<"Este mes tiene 28 dias"<<endl;
    }
    system("pause"); // esto es para que el programa no se acabe inmediatamente
}

