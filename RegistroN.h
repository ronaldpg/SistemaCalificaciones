#ifndef REGISTRON_H_INCLUDED
#define REGISTRON_H_INCLUDED
#include "Menu.h"
using namespace std;
void RegistroNotas();
void crearArchivoDinamicoTDA1();
void LecturaArchivoDinamicoTDA1();
string nombresS,nombreP,nombreT,materia,nombreArchivo2,nombreArchivo3,nombreE,nombrePrueba3,nombreR;
string notas="d:\\Ejercicios code blocks\\SistemaCalificaciones\\notas\\";
string notas1="d:\\Ejercicios code blocks\\SistemaCalificaciones\\notas\\";
int numMaterias,i;
float sumaN;
float notaP=0;
string pase1="Ha aprobado!";
string pase2="No ha aprobado";
string pase3;
double promedio;


struct{
float nota;
}cadena1[100];

void RegistroNotas(){
cout<<"\n\t\t|=================================================|"<<endl;
cout<<"\t\t|        BIENVENIDO AL REGISTRO DE NOTAS          |"<<endl;
cout<<"\t\t|=================================================|"<<endl;
cout<<"Ingrese el nombre del estudiante"<<endl;
fflush(stdin);
getline(cin,nombreE);
nombreArchivo2=nombreE;
nombreR=nombreE;
cout<<"==================================================================================="<<endl;
cout<<"Porfavor ingresar el semestre y Unidad de las notas(ejemplo: Semestre o Unidad 1)"<<endl;
cout<<"-----------------------------------------------------------------------------------"<<endl;
fflush(stdin);
cout<<"Semestre->";
getline(cin,nombresS);
cout<<"Unidad->";
getline(cin,nombreP);
fflush(stdin);
cout<<"============================================="<<endl;
cout<<"Ingrese el nombre de la materia"<<endl;
fflush(stdin);
cin>>materia;
cout<<"---------------------------------------------"<<endl;
cout<<"============================================="<<endl;
for(i=0;i<3;i++){
    fflush(stdin);
    cout<<"Ingrese las notas para la materia"<<endl;
    cout<<"Nota"" ";
    cin>>cadena1[i].nota;
    fflush(stdin);
    while(cadena1[i].nota <=0 || cadena1[i].nota >20){
        cout<<"Ingrese una nota correcta desde 1 a 20"<<endl;
        cin>>cadena1[i].nota;
    }
    sumaN =sumaN+cadena1[i].nota;
    promedio=sumaN/3;
}
    if(promedio >=14.00){
    cout<<pase1<<endl;
    pase3=pase1;
    }else{
    cout<<pase2<<endl;
    pase3=pase2;
    }
fflush(stdin);
cout<<"La suma de sus notas es:"<<promedio<<endl;
crearArchivoDinamicoTDA1();
cout<<"==========================================="<<endl;
}

//==============================REGISTRO DE NOTAS==========================
void LecturaArchivoDinamicoTDA1(){
ifstream archivoN;
string datos;
cout<<"\n==============================================="<<endl;
cout<<"Ingrese el nombre del estudiante"<<endl;
fflush(stdin);
getline(cin,nombreArchivo3);
nombrePrueba3.append(notas1);
nombrePrueba3.append(nombreArchivo3);
nombrePrueba3.append(".txt");
archivoN.open(nombrePrueba3.c_str(),ios::in);
if(archivoN.is_open()){
cout<<"==============================================="<<endl;
while(getline(archivoN,datos)){
      cout<<datos<<endl;
      }
    archivoN.close();
}else{
nombrePrueba3.clear();
cout<<"No se ha encontrado el estudiante ingresado"<<endl;
cout<<"==============================================="<<endl;
    }
}

void crearArchivoDinamicoTDA1(){
ofstream archivoN;
cout<<"================================="<<endl;
fflush(stdin);
notas.append(nombreArchivo2);
notas.append(".txt");
archivoN.open(notas.c_str(),ios::out);
if(archivoN.fail()){
    cout<<"Algo ha fallado en el registro"<<endl;
}else{
cout<<"\nSus notas se han registrado correctamente!"<<endl;
    archivoN<<"El nombre del estudiante es: "<<nombreR<<endl;
    archivoN<<"Usted "<<pase3<<endl;
    archivoN<<"Semestre "<<nombresS;
    archivoN<<" ";
    archivoN<<"Unidad "<<nombreP<<endl;
    archivoN<<"Materia: "<<materia<<endl;
    for(i=0;i<3;i++){
        archivoN<<"Sus notas: "<<cadena1[i].nota<<endl;
            }
        archivoN<<"Su promedio: "<<promedio<<endl;
        }
archivoN.close();
}



#endif // REGISTRON_H_INCLUDED
