#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
     int n, a, b, media;
     cout<<"Introduzca un numero"<<endl;
     cin>>n;
   
     a=0;
     b=0;
 
     while(n>0){ //while es una condicion que actua como un bucle
         a=a+n;
         b++;
         cout<<"Introduzca otro numero"<<endl;
         cin>>n;
     }
   
     media=a/b;

     cout<<"La media es "<<media<<endl;


    system("pause"); //esto hace que el programa no se acabe directamente
}

