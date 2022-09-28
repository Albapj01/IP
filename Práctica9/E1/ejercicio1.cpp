#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
using namespace std;


int main(int argc, char **argv){ //se ejecuta por el terminal
     if(argc !=2){ //si no se introduce un numero da error
           cout<<"ERROR. Debe introducir un valor para calcular su raiz cuadrada"<<endl;
           exit(0);
     }
     if(stof(argv[1])<0){ //si introduces un numero negativo da error
           cout<<"ERROR. El numero introducido es un numero negativo y no se le puede calcular la raiz cuadrada"<<endl;
           exit(0);
     }
     float n=sqrt(stof(argv[1])); //hace la raiz cuadrada del numero introducido
     cout<<"La raiz cuadrada es: "<<n<<endl;

    system("pause");
}

