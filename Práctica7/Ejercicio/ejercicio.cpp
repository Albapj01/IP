#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
struct Alumno{
     int dni=0;
     int edad=0;
     float nota=0;
     
     void introduciralumno(Alumno alumnos[], int na){
            cout<<"Introduzca el dni del alumno"<<endl;
            cin>>alumnos[na].dni;
            cout<<"Intruduzca la edad del alumno"<<endl;
            cin>>alumnos[na].edad;
            cout<<"Introduzca la nota del alumno"<<endl;
            cin>>alumnos[na].nota;
      }
         
      void imprime(){
            cout<<"Dni:"<<dni<<" Edad:"<<edad<<" Nota:"<<nota<<endl;
      }

      void nuevosdatos(){
            cout<<"Introduzca el dni"<<endl;
            cin>>dni;
            cout<<"Introduzca la edad"<<endl;
            cin>>edad;
            cout<<"Introduzca la nota"<<endl;
            cin>>nota;
      }
};

int busca(Alumno alumnos[], int na, int dni){
     for(int i=0; i<na; i++){
          if(alumnos[i].dni==dni){
             return i;
          }
      }
      return -1;
}


void menu(){
         cout<<"1. Anadir alumno"<<endl;
         cout<<"2. Imprimir datos alumno"<<endl;
         cout<<"3. Imprimir datos todos alumnos"<<endl;
         cout<<"4. Modificar alumno"<<endl;
         cout<<"5. Eliminar a un alumno"<<endl;
         cout<<"6. Salir"<<endl;
};
int main(){
    Alumno alumnos[10]; //se crea vector con basura
    int na=0; //indica cuantos elementos se estan usando del vector
    int opcion; //variable para controlar el menu del usuario
    do{
         menu(); //imprimo el menu en pantalla
         cin>>opcion; //pido opcion al usuario
         switch(opcion){
              case 1:{ 
                   if(na==10){ 
                        cout<<"No es posible introducir mas alumnos"<<endl;
                   }
                   else{
                        alumnos[na].introduciralumno(alumnos, na); //nos lleva a la funcion para introducir los alumnos 
                        na++;
                   }
             }break;
             case 2:{
                   int dni;
                   cout<<"Introduzca el dni del alumno"<<endl;
                   cin>>dni;
                   int indice=busca(alumnos, na, dni); //buscamos al alumno del cual queremos imprimir los datos introduciendo el dni
                   if(indice==-1){
                          cout<<"El alumno no esta registrado"<<endl; 
                   }
                   else{
                          alumnos[indice].imprime(); //imprime los datos del alumno que hemos buscado por el dni
                   }
             }break;
             case 3:{
                    for(int i=0; i<na; i++){
                        alumnos[i].imprime(); //imprime los datos de todos los alumnos
                    }
             }break;
              case 4:{
                    int dni;
                    cout<<"Introduzca el dni del alumno"<<endl;
                    cin>>dni;
                    int indice=busca(alumnos, na, dni); /*buscamos al alumno que queremos modificar introduciendo el dni*/
                    if(indice==-1){ /*cuando se introduce un dni erroneo o que no se ha introducido, se imprime que no existe el alumno*/
                         cout<<"El alumno no esta registrado"<<endl;
                    }
                    else{
                       alumnos[indice].nuevosdatos(); /*introducimos los nuevos datos del alumno buscado*/
                    }
              }break;
              case 5:{
                      int dni;
                      int indice=0;
                      cout<<"Introduzca el dni del alumno"<<endl;
                      cin>>dni;
                      indice=busca(alumnos, na, dni);
                      if(indice==-1){ 
                          cout<<"El alumno no esta registrado"<<endl;
                      }
                      else{
                           cout<<"El dni coincide con el alumno "<<indice+1<<endl;
                           alumnos[indice]=alumnos[na-1];
                           na--;
                           cout<<"Los datos de este alumno han sido borrados"<<endl;
                              /*el ultimo alumno registrado se guarda en el vector que se quede libre*/
                      }
              }break;
              case 6:{
                     cout<<"Ha salido del programa"<<endl;
              }break;
};
         }while(opcion !=6); //si se elige una opcion que no este entre 1 y 6 nos vuelve a aparecer el menu para elegir otra opcion

    system("pause"); //esto es para que el programa no se acabe directamente
}

