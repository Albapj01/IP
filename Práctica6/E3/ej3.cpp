#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

//cree aqui su funcion
float trace(float m[4][4]){ //esta funcion devuelve la suma de los elementos de la diagonal principal
      int a=0;
      for(int i=0; i<4; i++){ //for es un esquema condicional que actua como bucle
           a+=m[i][i]; //los valores que estan en la diagonal principal siempre son m[0][0], m[1][1]... 
      }
      return a; //esto es lo que devuelve la funcion
}
//// 
int test();//indica que la funcion test esta mas abajo
int main(){ 
		test();
		cout<<"Correcto"<<endl;
		system("pause");
		return 0;
}
//funcion de test
int test(){
	
	float m[4][4]={ {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	assert( trace(m)== 10 );
	return 0;
}	


