#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std; 

float min(float v1[], int n){ //devuelve el valor minimo del vector
       int M=v1 [0];
       for(int i=1; i<n; i++){ //for es un esquema condicional que actua como bucle
            if(v1 [i]<M){M=v1 [i];} //if es un esquema condicional al cual entras si se cumple la condicion
       }
       return M; //esto es lo que devuelve la funcion
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
	if(  min(vec,6)!=1 ) errors++;

	//test 2(all negative)
	float vec2[6]={-1,-2,-30,-4,-5,-6};
	if(  min(vec2,6)!=-30 ) errors++;

	//test 3 bigger
	float vec3[11]={-1,-2,-30,-4,-5,-6,1,2,5,6,10};
	if(  min(vec3,11)!=-30 ) errors++;

	return errors;
}	


