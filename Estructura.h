#ifndef ESTRUCTURA_H_INCLUDED
#define ESTRUCTURA_H_INCLUDED
#include "Menu.h"
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
char dato;
string numN;

//==========================HORARIO=========================
void horario(){
cout<<"\n|=========================================================================|"<<endl;
cout<<"|            BIENVENIDO/A, A LA CONSULTA DEL HORARIO CARRERA ITIM         |"<<endl;
cout<<"|       POR FAVOR VERIFICAR EL HORARIA DE LAS MATERIAS QUE SE MATRICULO   |"<<endl;
cout<<"|=========================================================================|"<<endl;
cout<<"|DÍA      |    MATERIA  | HORA |   MATERIA   | HORA  |  MATERIA   |  HORA |"<<endl;
cout<<"|=========================================================================|"<<endl;
cout<<"|LUNES    |POO          |7-9 AM|QUÍMICA      |9-11 AM|FÍSICA      |11-1PM |"<<endl;
cout<<"|-------------------------------------------------------------------------|"<<endl;
cout<<"|MARTES   |PROGRAMACIÓN |7-9 AM|CÁLCULO VEC. |9-11 AM|FÍSICA      |11-1PM |"<<endl;
cout<<"|-------------------------------------------------------------------------|"<<endl;
cout<<"|MIERCOLES|INVESTIG.    |7-9 AM|E.D.O        |9-11 AM|CÁLCULO VEC.|11-1PM |"<<endl;
cout<<"|-------------------------------------------------------------------------|"<<endl;
cout<<"|JUEVES   |COMP.DIGITAL |7-9 AM|POO          |9-11 AM|FÍSICA      |11-1PM |"<<endl;
cout<<"|-------------------------------------------------------------------------|"<<endl;
cout<<"|VIERNES  |PROGRAMACIÓN |7-9 AM|CÁLCULO VEC. |9-11 AM|QUÍMICA     |11-1PM |"<<endl;
cout<<"|=========================================================================|"<<endl;
}
//==================PROCESO DE MATRICULA======================
void matricula(){
string nrc1="5476";
string nrc2="9087";
string nrc3="1789";
string nrc4="9645";
string nrc5="4532";
string nrc6="5498";
string nrc7="6784";
string nrc8="1573";
string nrc9="9543";
cout<<"\n\t|========================================|"<<endl;
cout<<"\t|   BIENVENIDO AL SISTEMA DE MATRICULA   |"<<endl;
cout<<"\t|========================================|"<<endl;
do{
cout<<"|==========================================================|"<<endl;
cout<<"|      Ingrese los nrc en los cuales desea matricularse    |"<<endl;
cout<<"|==========================================================|"<<endl;
cout<<"|MATERIA|   NRC  |MATERIA|   NRC   |MATERIA       |   NRC  |"<<endl;
cout<<"|---------------------------------------------.------------|"<<endl;
cout<<"|QUÍMICA NRC:5476|CÁLCULO| NRC:1789|INVESTIGACIÓN |NRC:4532|"<<endl;
cout<<"|ÁLGEBRA NRC:9087|POO    | NRC:9645|PROGRAMACIÓN  |NRC:5498|"<<endl;
cout<<"|FÍSICA  NRC:6784|E.D.O  | NRC:1573|COMPUTACIÓN D |NRC:9543|"<<endl;
cout<<"|==========================================================|"<<endl;
cin>>numN;
while((numN.compare(nrc1)!=0)&&(numN.compare(nrc2))&&(numN.compare(nrc3))&&(numN.compare(nrc4))&&(numN.compare(nrc5))&&(numN.compare(nrc6))&&(numN.compare(nrc7))&&(numN.compare(nrc8))&&(numN.compare(nrc9))){
    cout<<"El NRC que usted ha ingresado no está registrado ingrese un NRC correcto"<<endl;
    cin>>numN;
}
cout<<"Desea agregar otro nrc ingrese (S) si desea caso contrario digite (n)"<<endl;
cin>>dato;
}while((dato=='S') || (dato=='s'));
cout<<"Usted se ha matriculado de manera correcta"<<endl;
}

#endif // ESTRUCTURA_H_INCLUDED
