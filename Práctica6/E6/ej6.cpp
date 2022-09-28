#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

//cree aqui su funcion
void max_row(float m[4][4], float max[4]){ //esta funcion guarda en el vector max el valor maximo de cada fila
     for(int i=0; i<4; i++){ //for es un esquema condicional que actua como bucle
          max[i]=m[i][0]; 
          for(int j=1; j<4; j++){
              if(m[i][j]>max[i]){ //if es un esquema condicional al cual entras si se cumple la condicion
                     max[i]=m[i][j];
              }
          }
     }
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
bool iguales(float m[4],float m2[4]){
		for(int i=0;i<4;i++)
				if (m[i]!=m2[i]) return false;
		return true;
}
int test(){
	
	float m[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	float max[4];
	float max_res[4]={1,2,3,4};
	max_row(m,max);
	assert(iguales(max,max_res));

	float m2[4][4]={ {-1,5,1,1},{5,1,4,8},{2,3,-1,-1},{-2,-1,-9,-9}};
	float max_res2[4]={5,8,3,-1};
	max_row(m2,max);
	assert(iguales(max,max_res2));
	return 0;
}	


