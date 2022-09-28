#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

//cree aqui su funcion
void transpose(float m[4][4]){ //esta funcion transpone la matriz pasada como argumento sin crear una matriz auxiliar
     for(int i=0; i<4; i++){ //for es un esquema condicional que actua como bucle
         for(int j=i+1; j<4; j++){
             int aux=m[i][j]; //el valor auxiliar nos permite trasponer la matriz sin crear otra matriz auxiliar
             m[i][j]=m[j][i];
             m[j][i]=aux;
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
bool iguales(float m[4][4],float m2[4][4]){
		for(int i=0;i<4;i++)
			for(int j=0;j<4;j++)
				if (m[i][j]!=m2[i][j]) return false;
		return true;
}
int test(){
	
	float m[4][4]={ {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	float m2[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	transpose(m) ;
	assert(iguales(m,m2));
	
	return 0;
}	


