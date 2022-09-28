#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
      int dia;
      cout<<"Introduzca un dia de la semana [1,7]"<<endl;
      cin>>dia;
     
      if ( (dia>=1) && (dia<=7) ){   /* if es un esquema condicional, el cual nos permite bifurcarnos, de forma que si se cumple lo que hay en el if, entra dentro de este, pero si no lo cumple, se va directamente al else, ademas && es un operador logico que significa y */
         switch (dia) { /* la estructura switch tiene la misma funcion que la estructura if else pero el switch es mas rapido que el if else */
              case 1 : {
                   cout<<"Es Lunes"<<endl;
              }break;
              case 2 : {
                   cout<<"Es Martes"<<endl;
              }break;
              case 3 : {
                   cout<<"Es Miercoles"<<endl;
              }break;
              case 4 : {
                   cout<<"Es Jueves"<<endl;
              }break;
              case 5 : {
                   cout<<"Es Viernes"<<endl;
              }break;
              case 6 : {
                    cout<<"Es Sabado"<<endl;
              }break;
              case 7 : {
                     cout<<"Es Domingo"<<endl;
              }break;
           };
      }
      else{
          cout<<"Este numero no corresponde con ningun dia de la semana"<<endl;
      }

    system("pause"); // esto es para que el programa no se acabe inmediatamente
}

