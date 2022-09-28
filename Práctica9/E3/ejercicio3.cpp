#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int fnacimiento(string fecha){ //se coge la fecha introducida
     char a[4];
     a[0]=fecha[6];
     a[1]=fecha[7];
     a[2]=fecha[8];
     a[3]=fecha[9];
     a[4]='\0';
     return stof(a);
}

bool abisiesto(int a){ //es bisiesto si febrero tiene 29 dias
     bool res=false;
     if(((a%4==0) && (a%100!=0)) || (a%400==0)){
        res=true;
     }
     return res;
}

int main(int argc, char **argv){ //se ejecuta por pantalla
     if(argc !=2){ //si no introduces un numero da error
        cout<<"ERROR. Debe introducir la fecha"<<endl;
        exit(0);
     }
     string fecha=argv[1];
     if((fecha[2]!='/') && (fecha[5]!='/')){ //si introduces un numero da error si no lo pones en el formato pedido
        cout<<"ERROR. Debe introducir la fecha de este modo: dd/mm/aaaa"<<endl;
        exit(0);
     }
     int a=fnacimiento(fecha); //entra en la funcion fnacimiento
     bool bisiesto=abisiesto(a); //entra en la funcion abisiesto
     if(bisiesto){ //si se cumple que es bisiesto entra en el if
        cout<<"El año de nacimiento es bisiesto"<<endl;
     }else{ //si no se cumple que es bisiesto entra en el else
        cout<<"El año de nacimiento no es bisiesto"<<endl;
     }

    system("pause");
}

