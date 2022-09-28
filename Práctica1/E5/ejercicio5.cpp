#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
   int i;
   cout<<"Introduzca un numero para ver si es mayor, menor o igual a 0"<<endl;
   cin>>i;
   if (i>0){ /* if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no lo cumple, se va directamente al else */
        cout<<"Es mayor que cero"<<endl;
   }
   else if (i<0){ /* el else if tiene la misma funcion que el if    else pero este ultimo se expresa de una forma mas compleja que el else if  */
               cout<<"Es menor que cero"<<endl;
   }
   else if (i==0){ /* ponemos == y no = debido a que si solo pones un igual, el valor de i cambia y pasa a hacer 0 (en este caso), mientras que si añadimos == solo expresamos que si llegara i a ser igual a 0 ocurriria esto, pero en ningun momento cambia el valor de i */
               cout<<"Es cero"<<endl;
   }

    system("pause"); // esto es para que el programa no se acabe inmediatamente
}

