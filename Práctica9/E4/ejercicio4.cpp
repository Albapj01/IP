#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

bool numero(string str){
    bool aux=true;
    int size = str.size();
    for(int i=0; (i<size) && aux; i++){
        if(isdigit(str[i])){
           size=false;
        }
    }
    return aux;
}

int main(int argc, char **argv){ /*este programa hace las operaciones que uno desee del numero o de los numeros introducidos*/
    if(argc==1){
        cout<<"ERROR. Debe introducir un numero"<<endl;
        exit(0);
     }
     float a= stof(argv[1]);
     for(int i=2; i<argc; i++){
        string b=argv[i];
        if(b=="-sum"){ //aqui se hace la suma de numeros
          if(((i+1)>= argc) || (numero(argv[i+1]))){
             cout<<"ERROR. Sum no es un numero"<<endl;
             exit(0);
          }
          else{
             float c= stof(argv[i+1]);
             a+=c;
             i++;
          }
         }else if(b=="-mul"){ //aqui se hace la multiplicacion de numeros
             if(((i+1)>=argc) || (numero(argv[i+1]))){
                cout<<"ERROR. Mul no es un numero"<<endl;
                exit(0);
              }
              else{
                  float c= stof(argv[i+1]);
                  a*=c;
                  i++;
              }
           }else if(b=="-div"){ //aqui se hace la division de numeros
               if(((i+1)>= argc) || (numero(argv[i+1]))){
                  cout<<"ERROR. Div no es un numero"<<endl;
                  exit(0);
               }
               else{
                   float c= stof(argv[i+1]);
                   a/=c;
                   i++;
               }
            }else if(b=="-sqrt"){ //aqui se hace la raiz de numeros
                a= sqrt(a);
            }
         }
         cout<<"El resultado es: "<<a<<endl;


    system("pause");
}

