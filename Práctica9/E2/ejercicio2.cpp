#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string.h>
#include <string>
using namespace std;

int main(int argc, char **argv){ 
     if(argc <=2){ 
          cout<<"ERROR. Para calcular la media se necesitan 2 numeros minimo"<<endl;
          return -1;
     }
     float n=0;
     float s=0;
     for(int i=1; i<argc; i++){ //va sumando los numeros introducidos y contandolos
          n= stoi(argv[i]);
          s=n+s;
     }
     float m= (s/(argc-1)); //calcula la media de los numeros introducidos
     cout<<"La media es: "<<m<<endl;

    system("pause");
}

