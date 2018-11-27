#include "Materia.h"
#include<string.h>
#include<iostream>
using namespace std;

Materia::Materia()
{
	this->peso=0;this->nota=0;
}

Materia::Materia(int peso,int nota,char nombreM[]){
	this->peso=peso;this->nota=nota;strcpy(this->nombreM,nombreM);
}

void Materia::cargarDat(){
	cout<<"Ingrese nombre de la meteria"<<endl;
	cin>>this->nombreM;
	cout<<"Peso academico"<<endl;
	cin>>this->peso;
	cout<<"Nota de la materia"<<endl;
	cin>>this->nota;
}

void Materia::mostrarDat(){
	cout<<" Nombre de la materia: "<<this->nombreM<<" Peso academico: "<<this->peso<<" Nota: "<<this->nota<<endl;
}

void Materia::setNombreM(char nombreM[]){
	strcpy(this->nombreM,nombreM);
}

void Materia::setNota(int nota){
	this->nota=nota;
}

void Materia::setPeso(int peso){
	this->peso=peso;
}

char *Materia::getNombrem(){
	return this->nombreM;
}

int Materia::getPeso(){
	return this->peso;
}

int Materia::getNota(){
	return this->nota;
}

Materia::~Materia()
{
	
}
