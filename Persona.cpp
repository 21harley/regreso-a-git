#include "Persona.h"
#include<iostream>
#include<string.h>

using namespace std;

Persona::Persona()
{
	this->edad=0;
	this->dinero=0.0;
	strcpy(this->nombre," ");
	this->sexo=' ';
}

Persona::Persona(int edad,char nombre[],float dinero,char sexo){
	this->edad=edad;
	strcpy(this->nombre,nombre);
	this->dinero=dinero;
	this->sexo=sexo;
}

void Persona::cargarDatos(){
	
	cout<<"Buenos dias por favro ingrese los proximos datos"<<endl;
	cout<<"Nombre"<<endl;
	cin>>this->nombre;
	cout<<"Edad"<<endl;
	cin>>this->edad;
    cout<<"Cantidad de dinero que dispone"<<endl;
	cin>>this->dinero;
	cout<<"Sexo F=femenino M=masculino"<<endl;
	cin>>this->sexo;
}

void Persona::mostrarDatos(){
	
	cout<<"Nombre: "<<this->nombre<<endl;
	cout<<"Edad: "<<this->edad<<endl;
	cout<<"Dinero: "<<this->dinero<<endl;
	cout<<"Sexo: "<<this->sexo<<endl;
}

void Persona::setDinero(float dinero){
	this->dinero=dinero;
}

void Persona::setEdad(int edad){
	this->edad=edad;
}

void Persona::setNombre(char nombre[]){
	strcpy(this->nombre,nombre);
}

void Persona::setSexo(char sexo){
	this->sexo=sexo;
}

int Persona::getEdad(){
	return this->edad;
}

float Persona::getDinero(){
	return this->dinero;
}

char *Persona::getNombre(){
	return this->nombre;
}

char Persona::getSexo(){
	return this->sexo;
}

Persona::~Persona()
{
}
