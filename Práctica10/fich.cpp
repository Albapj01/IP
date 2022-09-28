#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

struct Alumno{
    string nombre, apellido1, apellido2;
    string dni;
    int edad;
    float nota;
   
    void imprime(){ //imprime los datos del alumno
         cout<<"Nombre:"<<nombre<<" Appellido1:"<<apellido1<<" Apellido2:"<<apellido2<<" Dni:"<<dni<<" Edad:"<<edad<<" Nota:"<<nota<<endl;
    }

    void nuevosdatos(){ //introduce los nuevos datos
         cout<<"Introduzca el nombre"<<endl;
         cin>>nombre;
         cout<<"Introduzca el primer apellido"<<endl;
         cin>>apellido1;
         cout<<"Introduzca el segundo apellido"<<endl;
         cin>>apellido2;
         cout<<"Introduzca el dni"<<endl;
         cin>>dni;
         cout<<"Introduzca la edad"<<endl;
         cin>>edad;
         cout<<"Introduzca la nota"<<endl;
         cin>>nota;
     }

    void introduciralumno(){ //introducimos a los alumnos
        cout<<"Introduzca el nombre del alumno"<<endl;
        cin>>nombre;
        cout<<"Introduzca el primer apellido del alumno"<<endl;
        cin>>apellido1;
        cout<<"Introduzca el segundo apellido del alumno"<<endl;
        cin>>apellido2;
        cout<<"Introduzca el dni del alumno"<<endl;
        cin>>dni;
        cout<<"Introduzca la edad del alumno"<<endl;
        cin>>edad;
        cout<<"Introduzca la nota del alumno"<<endl;
        cin>>nota;
    }
};

int busca(Alumno alumnos[], int na, string dni){
     string a="TRWAGMYFPDXBNJZSQVHLCKE";
     char letra=dni[8];
     dni.resize(8);
     int numero=stoi(dni);
     letra=toupper(letra);
     char letrac=a[numero%23];
     if(letra==letrac){
        return true;
     }
     return false;
}

bool guarda(string fich, Alumno alumnos[], int nal){ //esta funcion nos permite guardar datos en el fichero
    ofstream file; //declara el fichero
    file.open(fich);
    if(!file.is_open()){
       return false;
    }
    for(int i=0; i<nal; i++){
       if(alumnos[i].dni != ""){
           file<<alumnos[i].dni<<endl;
           file<<alumnos[i].nombre<<endl;
           file<<alumnos[i].apellido1<<endl;
           file<<alumnos[i].apellido2<<endl;
           file<<alumnos[i].edad<<endl;
           file<<alumnos[i].nota<<endl;
       }
    }
    file.close();
    return true;
}

int lee(string fich, Alumno alumnos[], int tam){ //funcion que nos permite leer el fichero
    tam=-1;
    ifstream file; //declara el fichero
    file.open(fich); //abre el fichero
    if(!file.is_open()){ //comprueba que el fichero se ha abierto
       return tam+1;
    }
    int c=0;
    while(!file.eof()){
        Alumno a;
        file>>a.dni;
        file>>a.nombre;
        file>>a.apellido1;
        file>>a.apellido2;
        file>>a.edad;
        file>>a.nota;
        alumnos[c]=a;
        c++;
     }
     file.close();
     return c;
} 

void menu(){
     cout<<"Seleccione una opcion"<<endl;
     cout<<"1. Añadir alumno"<<endl;
     cout<<"2. Imprimir datos alumno"<<endl;
     cout<<"3. Imprimir datos todos alumnos"<<endl;
     cout<<"4. Modificar alumno"<<endl;
     cout<<"5. Eliminar alumno"<<endl;
     cout<<"6. Salir"<<endl;

}

int main(int argc, char **argv){
    Alumno alumnos[100]; //se crea un vector con basura
    int na=0; //indica cuantos elementos se estan usando del vector
    if(argc !=2){
        cout<<"ERROR. Debe introducir el nombre del fichero"<<endl;
        return -1;
    }
    na=lee(argv[1],alumnos,100);
    int opcion=0; //variable para controlar el menu del usuario
    do{
         menu();
         cin>>opcion;
         switch(opcion){
            case 1:{
                 if(na==100){
                    cout<<"No es posible introducir mas alumnos"<<endl;
                 }
                 else{
                     alumnos[na].introduciralumno(); //nos lleva a la funcion para introducir los alumnos
                     na++;
                  }
              }break;
            case 2:{
                  string dni;
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
                 string dni;
                 cout<<"Introduzca el dni del alumno"<<endl;
                 cin>>dni;
                 int indice=busca(alumnos, na, dni); /*buscamos al alumno que queremso modificar introduciendo el dni*/
                 if(indice==-1){ /*cuando se introduce un dni erroneo o que no esta registrado, se imprime que no existe el alumno*/
                    cout<<"El alumno no esta registrado"<<endl;
                 }
                 else{
                     alumnos[indice].nuevosdatos(); /*introducimos los nuevos datos del alumno buscado*/
                 }
             }break;
             case 5:{
                  string dni;
                  int indice=0;
                  cout<<"Introduzca el dni del alumno"<<endl;
                  cin>>dni;
                  indice=busca(alumnos, na, dni);
                  if(indice==-1){
                       cout<<"El alumno no esta registrado"<<endl;
                  }
                  else{
                       cout<<"El dni coincide con el alumno"<<indice+1<<endl;
                       alumnos[indice]=alumnos[na-1];
                       na--;
                       cout<<"Los datos de este alumno han sido borrados"<<endl; /*el ultimo alumno registrado se guarda en el vector que se quede libre*/
                  }
              }break;
              case 6:{
                   cout<<"Ha salido del programa"<<endl;
              }break;
};
          }while(opcion !=6); /*si se elige una opcion que no esta entre 1 y 6 nos vuelve a aparecer el menu para elegir otra opcion*/

    
    system("pause");
}

