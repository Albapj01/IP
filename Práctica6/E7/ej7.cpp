#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

//cree aqui su funcion
void min_col(float m[4][4], float min[4]){ //esta funcion guarda en el vector min el menor valor de cada columna
    for(int j=0; j<4; j++){ //for es un esquema condicional que actua como bucle
       min[j]=m[0][j];
       for(int i=1; i<4; i++){ /*como en este caso cogemos el menor valor de la columna, ponemos j que es el que hace referencia a la columna primero e i que hace referencia a las filas despues*/
            if(m[i][j]<min[j]){ //if es un esquema condicional al cual entras si se cumple la condicion
                  min[j]=m[i][j];
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
	float min[4];
	float min_res[4]={1,1,1,1};
	min_col(m,min);
	assert(iguales(min,min_res));
	
	
	float m2[4][4]={ {1,-1,-99999,211},{23,24,12,22},{33,43,-12,3},{124,4613,454,4312}};
	float min_res2[4]={1,-1,-99999,3};
	min_col(m2,min);
 	assert(iguales(min,min_res2));
	return 0;
	
	
}	


