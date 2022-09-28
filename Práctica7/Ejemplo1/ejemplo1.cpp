#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
struct Point2d{ //tipo de dato
       float x; //miembros del tipo de dato
       float y=0;
};

float distance(Point2d a, Point2d b){
       return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

int main(){
      Point2d p1,p2,p3; //instancias
      p1.x=12;
      p1.y=4;
      cin>>p2.x>>p2.y;
      float d=distance(p1,p2);
      cout<<"d="<<d<<endl;
      p3=p2; //copia
      cout<<p3.x<<" "<<p3.y<<endl;
    system("pause");
}

