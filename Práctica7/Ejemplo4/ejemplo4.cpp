#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
struct Point2d{
     float x=0, y=0;
     void set(int max){
          x=rand()%(max+1);
          y=rand()%(max+1);
     }
     float dist(Point2d b){
          return sqrt((x-b.x)*(x-b.x)+(y-b.y)*(y-b.y));
     }
     void imprime(){
          cout<<x<<" "<<y<<endl;
     }
};

int main(){
     Point2d p1,p2;
     p1.set(100); //aqui estan los datos del punto 1 obtenidos de la funcion a la cual llaman
     p2.set(100); //aqui estan los datos del punto 2 obtenidos de la funcion a la cual llaman
     cout<<p1.dist(p2)<<endl; //calcula la distancia entre p1 y p2
    system("pause"); //esto es para que el programa no se acabe directamente
}

