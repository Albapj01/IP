#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Introduzca los valores de a y de b tal que a sea mayor que b, para que al final cambiemos el valor entre estos y obtengamos que b es mayor que a"<<endl;
    cin>>a>>b;
    cout<<"a="<<a<<" b="<<b<<endl;
    int aux; // introducimos una variable auxiliar para que no haya problema al cambiar los valores de a y de b y obtengamos que ambos valen lo mismo
    aux=a;
    a=b;
    b=aux;
    cout<<"a="<<a<<" b="<<b<<endl;  /* hemos intercambiado los numeros de a y b siendo b mayor que a */

    system("pause"); // esto es para que el programa no se acabe inmediatamente
}

