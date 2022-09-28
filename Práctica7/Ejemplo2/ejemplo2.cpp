#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

struct Point2d{
      float x=0, y=0;
};

Point2d suma(Point2d a, Point2d b){ //suma los datos de los puntos
      Point2d res;
      res.x=a.x+b.x;
      res.y=a.y+b.y;
      //res=a+b no es posible hacerlo
      return res;
}

void set(Point2d&p, int max){
       p.x=rand()%(max+1);
       p.y=rand()%(max+1);
}

int main(){
      Point2d p1,p2,p3;
      set(p1,100);
      set(p2,100);
      p3=suma(p1,p2);

    system("pause"); //esto es para que el programa no se acabe directamente
}

