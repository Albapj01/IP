#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std; 

//cree aqui su funcion
void stats(float m[4][4], float res[2]){ /*funcion que guarda en un vector el valor de la media y la desviacion tipica en un vector */
     //calculamos la media
     float a=0;
     for(int i=0; i<4; i++){ //for es un esquema condicional que actua como bucle
         for(int j=0;j<4; j++){
              a+= m[i][j];
         }
     }
     float media= a/16; //la suma de los valores se divide por le numero de valores para obtener la media
     
     //calculamos la desviacion tipica
     a=0;
     for(int i=0; i<4; i++){
         for(int j=0; j<4; j++){
             a+=(m[i][j]-media)*(m[i][j]-media); //con esta formula obtenemos la varianza
         }
     }
     float dt=sqrt(a/16); /*la desviacion tipica se obtiene de hacer la raiz cuadrada del valor obtenido anteriormente entre el numero de valores utilizados */

     res[0]=media; //en el primer elemento del vector guardamos el valor de la media
     res[1]=dt; //en el segundo elemento del vector guardamos el valor de la desviacion tipica
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
	
	float m[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	float st[2];
	stats(m,st);
	assert( fabs( st[0]-2.5)<1e-3  && fabs(st[1]-1.11803)<1e-3);
	return 0;
}	


