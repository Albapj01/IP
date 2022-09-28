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

};


   bool compruebadni(string & cad){
       int c=0;
       int b=cad.size();
       for(int i=0; i<(b-1); i++){
           if(isdigit(cad[i])==true){
              c++;
           }
       }
       if((c!=8) || (b!=9)){
           return false;
       }
       else{
            return true;
        }
  }

   Alumno introduciralumno(){ //introducimos a los alumnos
        Alumno a;
        string dni= "";
        cout<<"Introduzca el dni del alumno"<<endl;
        cin>>dni;
        if(compruebadni(dni)){
            a.dni = dni;
        }
        else{
            cout<<"Error. El dni introducido no es valido"<<endl;
            exit(0);
        }
        cout<<"Introduzca el nombre del alumno"<<endl;
        cin>>a.nombre;
        cout<<"Introduzca el primer apellido del alumno"<<endl;
        cin>>a.apellido1;
        cout<<"Introduzca el segundo apellido del alumno"<<endl;
        cin>>a.apellido2;
        cout<<"Introduzca la edad del alumno"<<endl;
        cin>>a.edad;
        cout<<"Introduzca la nota del alumno"<<endl;
        cin>>a.nota;
        return a;
    }

   bool addal(Alumno alumnos[], int na, Alumno a){
       for(int i=0; i<na; i++){
         if(alumnos[i].dni== ""){
             alumnos[i] = a;
             return true;
         }
       }
       return false;
    }

   int busca(Alumno alumnos[], int na, string dni){
       for(int i=0; i<na; i++){
          if(alumnos[i].dni==dni){
             return i;
          }
        }
        return -1;
   }
   
    void imprime(Alumno & a){ //imprime los datos del alumno
         cout<<"Nombre:"<<a.nombre<<" Appellido1:"<<a.apellido1<<" Apellido2:"<<a.apellido2<<" Dni:"<<a.dni<<" Edad:"<<a.edad<<" Nota:"<<a.nota<<endl;
    }

     void imprimetod(Alumno alumnos[], int na){
          for(int i=0; i<na; i++){
             if(alumnos[i].dni != ""){
                cout<<"Alumno "<<i<<endl;
                imprime(alumnos[i]);
                cout<<"--------"<<endl;
             }
          }
       }

     void elimial(Alumno alumnos[], int index){
           alumnos[index].dni = "";
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

int lee(string fich, Alumno alumnos[]){ //funcion que nos permite leer el fichero
    ifstream file; //declara el fichero
    file.open(fich); //abre el fichero
    if(!file.is_open()){ //comprueba que el fichero se ha abierto
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
     cout<<"6. Guardar"<<endl;
     cout<<"7. Salir"<<endl;

}

int main(int argc, char **argv){
    if(argc !=2){
        cout<<"ERROR. Debe introducir el nombre del fichero"<<endl;
        exit(0);
    }
    Alumno alumnos[100]; //se crea un vector con basura
    int opcion=0; //variable para controlar el menu del usuario
    string fich = argv[1];
    if(lee(fich, alumnos)==-1){
        cout<<"Aviso. El fichero no se ha localizado, pero el programa empezara sin el"<<endl;
   }
    do{
         menu();
         cin>>opcion;
         switch(opcion){
            case 1:{
                 Alumno a = introduciralumno();
                 if(!addal(alumnos, 100, a)){
                    cout<<"No es posible introducir mas alumnos"<<endl;
                 }
                 else{
                     cout<<"Se ha añadido un nuevo alumno"<<endl;
                  }
                  cout<<""<<endl;
              }break;
            case 2:{
                  cout<<"Introduzca el dni del alumno"<<endl;
                  string dni;
                  cin>>dni;
                  int i=busca(alumnos, 100, dni); //buscamos al alumno del cual queremos imprimir los datos introduciendo el dni
                  if(i!=-1){
                      imprime(alumnos[i]); //imprime los datos del alumno que hemos buscado por el dni
                  }
                  else{
                      cout<<"El alumno no esta registrado"<<endl;
                  }
              }break;
             case 3:{
                 imprimetod(alumnos, 100); //imprime los datos de todos los alumnos
                 cout<<""<<endl;
             }break;
             case 4:{
                 cout<<"Introduzca el dni del alumno"<<endl;
                 string dni;
                 cin>>dni;
                 int i=busca(alumnos, 100, dni); /*buscamos al alumno que queremso modificar introduciendo el dni*/
                 if(i==-1){ /*cuando se introduce un dni erroneo o que no esta registrado, se imprime que no existe el alumno*/
                    cout<<"El alumno no esta registrado"<<endl;
                 }
                 else{
                    cout<<"Introduzca los nuevos datos del alumno"<<endl;
                    Alumno a = introduciralumno();
                    alumnos[i] = a;
                 }
                 cout<<""<<endl;
             }break;
             case 5:{
                  string dni;
                  int i=0;
                  cout<<"Introduzca el dni del alumno"<<endl;
                  cin>>dni;
                  i=busca(alumnos, 100, dni);
                  if(i==-1){
                       cout<<"El alumno no esta registrado"<<endl;
                  }
                  else{
                       elimial(alumnos, i);
                       cout<<"Los datos de este alumno han sido borrados"<<endl; /*el ultimo alumno registrado se guarda en el vector que se quede libre*/
                  }
                  cout<<""<<endl;
              }break;
              case 6:{
                   cout<<"La bbdd se guardara en el fichero seleccionado"<<endl;
                   guarda(fich, alumnos, 100);
                   if(!guarda(fich, alumnos, 100)){
                       cout<<"Error. No se ha podido guardar en el fichero"<<endl;
                   }
                   else{
                       cout<<"El fichero se ha guardado correctamente"<<endl;
                   }
                   cout<<""<<endl;
              }break;
              case 7:{
                   cout<<"Ha salido del programa"<<endl;
                   cout<<""<<endl;
              }break;
}
          }while(opcion !=7); /*si se elige una opcion que no esta entre 1 y 6 nos vuelve a aparecer el menu para elegir otra opcion*/

    
    system("pause");
}

