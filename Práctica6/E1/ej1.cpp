#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

//cree aqui su funcion
 int find(float m[4][4], float val){ //esta funcion devuelve el numero de veces que aparece val en la matriz
      int a=0;
      for(int i=0; i<4; i++){ //for es un esquema condicional que actua como bucle
          for(int j=0; j<4; j++){
              if(m[i][j]==val){ //if es un esquema condicional al cual entras si se cumple la condicion 
                 a++;
              }
          }
      }
      return a; //esto es lo que nos devuelve la funcion
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
	assert(  find(m,1 )==4);
	assert(  find(m,2 )==4);
	assert(  find(m,-1 )==0);
	return 0;
}	


