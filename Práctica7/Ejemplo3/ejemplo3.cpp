#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

struct Point2d{
    float x=0, y=0;
};

void print(Point2d p){
    cout<<p.x<<" "<<p.y<<endl;
}

void printAll(Point2d vec[], int n){ 
    for(int i=0; i<n; i++){
        cout<<vec[i].y<<endl;
    }
}

int main(){
     Point2d v[10];
     for(int i=0; i<10; i++){
          v[i].x=i;
          v[i].y=(i+1)*2;
     }
     for(int i=0; i<10; i++){
           print(v[i]); //imprime los elementos del vector correspondiente a su zona del vector
     }
     printAll(v,10); //imprime todos los elementos del vector
    system("pause"); //esto es para que el programa no se acabe directamente
}

