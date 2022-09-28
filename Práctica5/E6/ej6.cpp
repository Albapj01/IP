#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std; 
 
bool soniguales(float v1[], float v2[],int n){ //indicara si los dos vectores son iguales
       for(int i=0; i<n; i++){ //for es un esquema condicional que actua como bucle
           if(v1 [i]!=v2 [i]){ //if es un esquema condicional al cual entras si se cumple la condicion
					return false; //esto es lo que devuelve la funcion si se cumple la condicion del if
           }
       }
       return true; //esto es lo que devuelve la funcion si no se cumple la condicion
}
//// 
int test();
int main(){ 
		int nerrors=test();
		if (nerrors==0){
			cout<<"Correcto "<<endl;
		}
		else{
			cout<<"Hay "<<nerrors<<" errores en el test"<<endl;
		}
		system("pause");

}

int test(){
	int errors=0;


	//test 1(all positive)
	float vec[6]={1,2,30,4,5,6};
	float vec2[6]={1,2,30,4,5,6};
	float vec3[6]={1,2,30,4,5,7};
	float vec4[6]={1,2,-1,4,5,6};
	float vec5[6]={1,1,1,1,1,1};

	if(  soniguales(vec,vec2,6)==false ) errors++;
	if(  soniguales(vec,vec3,6)==true ) errors++;
	if(  soniguales(vec,vec4,6)==true ) errors++;
	if(  soniguales(vec5,vec5,6)==false ) errors++;

	return errors;
}	


