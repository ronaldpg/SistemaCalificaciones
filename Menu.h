#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "Estructura.h"
#include "RegistroN.h"
#include <string.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
using namespace std;
void crearArchivoDinamicoTDA();
void LecturaArchivoDinamicoTDA();
void menuE();
void menu1();
void menu2();
void eleccion();
void menuP();
void crearArchivoP();
void LecturaArchivoP();
string nombreArchivo,nombreArchivo1,nombreArchivoP,nombreArchivoP1;
string Prueba1="d:\\Ejercicios code blocks\\SistemaCalificaciones\\Docentes\\";
string Prueba2="d:\\Ejercicios code blocks\\SistemaCalificaciones\\Estudiantes\\";
string Prueba3="d:\\Ejercicios code blocks\\SistemaCalificaciones\\Estudiantes\\";
string nombrePrueba,nombrePrueba1;
string Prueba4="d:\\Ejercicios code blocks\\SistemaCalificaciones\\Docentes\\";
string nombreC,cedula,nombreD;


void agregarTexto();

//datos para creacion de usuario estudiantes
struct{
string nombre,nombre1,usuario;
string apellido,apellido1;
string cedula;
}cadena2;

//datos para creacion de usuario docentes
struct{
string nombreP,usuarioP;
string apellidoP;
string cedulaP;
}cadenaP;


void presentacion(){
int i;
string caratula[4]={"|Nombre  : Ronald  Puruncajas              |","|Fecha   : 27/10/2022                      |","|Profesor: Fredy Marcelo Gavilanes Sagñay  |","|Tema    : Sistema Académico               |"};
cout<<"\t\t\t\t|==========================================|"<<endl;
cout<<"\t\t\t\t|  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE |"<<endl;
cout<<"\t\t\t\t|          SEDE DE SANTO DOMINGO           |"<<endl;
cout<<"\t\t\t\t|==========================================|"<<endl;
for(i=0;i<4;i++){
    cout<<"\t\t\t\t"<<caratula[i]<<endl;
    cout<<"\t\t\t\t|------------------------------------------|"<<endl;
    }
cout<<"\t\t\t\t|==========================================|"<<endl;
}

void eleccion(){
string resp;
cout<<"Ingrese su rol en la institución(ejem: Alumno o Profesor)"<<endl;
cin>>resp;
fflush(stdin);
if((resp =="Alumno") || (resp =="alumno")){
menu1();
}else if((resp =="Profesor") || (resp =="profesor")){
menu2();
}else{
cout<<"Ingrese un rol correcto por favor Alumno o Profesor"<<endl;
eleccion();
    }
}
//===================REGISTRO/INICIO DE SESION ESTUDIANTES=============================================
void menu1(){
int opc1;
cout<<"\n\t|================================|"<<endl;
cout<<"\t|1) Registro de usuario            |"<<endl;
cout<<"\t|2) Inicio de sesión               |"<<endl;
cout<<"\t|3) Salir                          |"<<endl;
cout<<"\t|==================================|"<<endl;
cout<<"\tPorfavor ingrese una opción"<<endl;
cin>>opc1;
while(opc1 <=0 || opc1 >3){
    cout<<"Ingrese una opción correcta"<<endl;
    cin>>opc1;
    }
switch(opc1){

case 1:
cout<<"|------------------------|"<<endl;
cout<<"Ingrese sus nombres"<<endl;
fflush(stdin);
cout<<"Nombres:";
getline(cin,cadena2.nombre);
fflush(stdin);
cout<<"|------------------------|"<<endl;
cout<<"Ingrese sus apellidos"<<endl;
cout<<"Apellidos:";
getline(cin,cadena2.apellido);
fflush(stdin);
cout<<"Ingrese su cédula"<<endl;
cin>>cadena2.cedula;
while(cadena2.cedula.size()!=10){
    cout<<"Ingrese un número de cédula correcta: ";
    cin >> cadena2.cedula;
}
nombreC.append(cadena2.nombre);
nombreC.append(" ");
nombreC.append(cadena2.apellido);
cadena2.usuario.append(cadena2.nombre.substr(0,2));
cadena2.usuario.append("LD");
cadena2.usuario.append(cadena2.cedula.substr(2,4));
fflush(stdin);
cout<<"-------------------------------------------------"<<endl;
cout<<"Su id para inicio de sesión es: "<<cadena2.usuario<<endl;
nombreArchivo=cadena2.usuario;
nombreArchivo2=cadena2.usuario;
crearArchivoDinamicoTDA();
menu1();
break;

case 2:
LecturaArchivoDinamicoTDA();
menuE();

break;

case 3:
exit(0);
break;

default:
cout<<"Igrese una opción correcta"<<endl;
    }
}

//===================================REGISTRO/INICIO DE SESION PROFESORES==========================================
void menu2(){
int opc2;
cout<<"\n\t|================================|"<<endl;
cout<<"\t|1) Registro de usuario            |"<<endl;
cout<<"\t|2) Inicio de sesión               |"<<endl;
cout<<"\t|3) Salir                          |"<<endl;
cout<<"\t|==================================|"<<endl;
cout<<"\tPorfavor ingrese una opción"<<endl;
cin>>opc2;
while(opc2 <=0 || opc2 >3){
    cout<<"Ingrese una opción correcta"<<endl;
    cin>>opc2;
    }
switch(opc2){

case 1:
cout<<"|------------------------|"<<endl;
cout<<"Ingrese sus nombres"<<endl;
fflush(stdin);
cout<<"Nombres:";
getline(cin,cadenaP.nombreP);
fflush(stdin);
cout<<"|------------------------|"<<endl;
cout<<"Ingrese sus apellidos"<<endl;
cout<<"Apellidos:";
getline(cin,cadenaP.apellidoP);
fflush(stdin);
cout<<"Ingrese su cédula"<<endl;
cin>>cadenaP.cedulaP;
while(cadenaP.cedulaP.size()!=10){
    cout<<"Ingrese un número de cédula correcta: ";
    cin >> cadenaP.cedulaP;
}
nombreD.append(cadenaP.nombreP);
nombreD.append(" ");
nombreD.append(cadenaP.apellidoP);
cadenaP.usuarioP.append(cadenaP.nombreP.substr(0,2));
cadenaP.usuarioP.append("LD");
cadenaP.usuarioP.append(cadenaP.cedulaP.substr(2,4));
fflush(stdin);
cout<<"-------------------------------------------------"<<endl;
cout<<"Su id para inicio de sesión es: "<<cadenaP.usuarioP<<endl;
nombreArchivoP=cadenaP.usuarioP;
nombreArchivoP1=cadenaP.usuarioP;
crearArchivoP();
menu2();
break;

case 2:
LecturaArchivoP();
menuP();

break;

case 3:
exit(0);
break;

default:
cout<<"Igrese una opción correcta"<<endl;
    }
}

//============================================CREACION DE ARCHIVOS ESTUDIANTES==========================================

void LecturaArchivoDinamicoTDA(){
ifstream archivo2;
cout<<"================================="<<endl;
cout<<"Ingrese Su id para iniciar sesión"<<endl;
fflush(stdin);
getline(cin,nombreArchivo1);
nombrePrueba.append(Prueba3);
nombrePrueba.append(nombreArchivo1);
nombrePrueba.append(".txt");
archivo2.open(nombrePrueba.c_str(),ios::in);
if(archivo2.is_open()){
cout<<"Se ha iniciado sesión de manera correcta"<<endl;
}else{
cout<<"No se encontro el archivo"<<endl;
nombrePrueba.clear();
menu1();
    }
}

void crearArchivoDinamicoTDA(){
ofstream archivo2;
cout<<"================================="<<endl;
fflush(stdin);
Prueba2.append(nombreArchivo);
Prueba2.append(".txt");
archivo2.open(Prueba2.c_str(),ios::out);
if(archivo2.fail()){
    cout<<"Algo ha fallado en el registro"<<endl;
}else{
cout<<"Se ha registrado correctamente!"<<endl;
    archivo2<<"Su nombre es:"<<cadena2.nombre<<" "<<cadena2.apellido<<endl;
    archivo2<<"Su cédula es:"<<cadena2.cedula<<endl;
    archivo2<<"Su usuario es:"<<cadena2.usuario<<endl;
archivo2.close();
    }
}

//=============================================CREACION ARCHIVOS DOCENTES================================================
void LecturaArchivoP(){
ifstream archivoP;
cout<<"================================="<<endl;
cout<<"Ingrese Su id para iniciar sesión"<<endl;
//D:\Ejercicios code blocks\SistemaCalificaciones\DOCENTES
fflush(stdin);
getline(cin,nombreArchivoP);
nombrePrueba1.append(Prueba4);
nombrePrueba1.append(nombreArchivoP);
nombrePrueba1.append(".txt");
archivoP.open(nombrePrueba1.c_str(),ios::in);
if(archivoP.is_open()){
cout<<"Se ha iniciado sesión de manera correcta"<<endl;
}else{
cout<<"No se encontro el archivo"<<endl;
nombrePrueba1.clear();
menu2();
    }
}

void crearArchivoP(){
ofstream archivoP;
cout<<"================================="<<endl;
fflush(stdin);
Prueba1.append(nombreArchivoP);
Prueba1.append(".txt");
archivoP.open(Prueba1.c_str(),ios::out);
if(archivoP.fail()){
    cout<<"Algo ha fallado en el registro"<<endl;
}else{
cout<<"Se ha registrado correctamente!"<<endl;
    archivoP<<"Su nombre es:"<<cadenaP.nombreP<<" "<<cadenaP.apellidoP<<endl;
    archivoP<<"Su cédula es:"<<cadenaP.cedulaP<<endl;
    archivoP<<"Su usuario es:"<<cadenaP.usuarioP<<endl;
archivoP.close();
    }
}



void menuP(){
int opc;
cout<<"\n============================"<<endl;
cout<<"1) Registrar Notas"<<endl;
cout<<"2) Visualizar Notas"<<endl;
cout<<"3) Regresar al menú anterior"<<endl;
cout<<"Ingrese una opción"<<endl;
cout<<"============================"<<endl;
cin>>opc;
while(opc <=0 || opc >3){
    cout<<"Ingrese una opción correcta"<<endl;
    cin>>opc;
}
switch(opc){

case 1:
RegistroNotas();
menuP();
break;

case 2:
LecturaArchivoDinamicoTDA1();
menuP();
break;

case 3:

menu2();
break;
default:
cout<<"Ingrese una opción correcta"<<endl;
    }
}

void menuE(){
int opc4;
cout<<"\n============================"<<endl;
cout<<"1) Matrícula"<<endl;
cout<<"2) Visualizar Notas"<<endl;
cout<<"3) Horario"<<endl;
cout<<"4) Regresar al menú anterior"<<endl;
cout<<"Ingrese una opción"<<endl;
cout<<"============================"<<endl;
cin>>opc4;
while(opc4 <=0 || opc4 >4){
    cout<<"Ingrese una opción correcta"<<endl;
    cin>>opc4;
}
switch(opc4){
case 1:
matricula();
menuE();
break;

case 2:
LecturaArchivoDinamicoTDA1();
menuE();
break;

case 3:
horario();
menuE();
break;

case 4:
menu1();
break;
default:
cout<<"Ingrese una opción correcta"<<endl;

    }
}
#endif // MENU_H_INCLUDED
