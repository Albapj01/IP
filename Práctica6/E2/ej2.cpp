#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 

//cree aqui su funcion
 void sum(float m[4][4], float m2 [4][4]){ //esta funcion hace una suma matricial
     for(int i=0; i<4; i++){ //for es un esquema condicional qu actua como bucle
         for(int j=0; j<4; j++){
             m[i][j]=m[i][j]+m2[i][j]; //se guarda en la matriz m el valor de la suma de las matrices m y m2
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
int test(){
	
	float m[4][4]={ {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	float m2[4][4]={ {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};	
	sum(m,m2);	
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			assert( m[i][j]==2*m2[i][j]);
	return 0;
}	


