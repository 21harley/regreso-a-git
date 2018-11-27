#include "Estudiante.h"
#include "Persona.h"

using namespace std;

Estudiante::Estudiante():Persona(){
	this->totalMateria=0;
	this->promedio=0;
    this->materia[10]=new Materia[10];
    this->unCuri=0;
}

Estudiante::Estudiante(int e,char n[],float d,char s,int toltalMateria,float promedio,Materia **materia):Persona(e,n,d,s){
	this->totalMateria=toltalMateria;
	this->materia=materia;this->unCuri=0;
	for(int i=0;i<this->totalMateria;i++){
		this->unCuri+=this->materia[i]->getPeso();
	}
    
}

void Estudiante::cargarDatos(){
	Persona::cargarDatos();
	cout<<"Ingrese el numero de materia"<<endl;
	cin>>this->totalMateria;
	for(int i=0;i<this->totalMateria;i++){
	this->materia[i]=new Materia();
	this->materia[i]->cargarDat();
	this->unCuri+=this->materia[i]->getPeso();
	}
}

void Estudiante::mostrarDatos(){
	Estudiante::Persona::mostrarDatos();
	cout<<"Total de materias: "<<this->totalMateria<<endl;
	cout<<"Unidades Curriculares en curso: "<<this->unCuri<<endl;

	for(int i=0;i<this->totalMateria;i++){
		this->materia[i]->mostrarDat();
	}
	Estudiante::calcularPromedio();
}

void Estudiante::calcularPromedio(){
	
	float total=0,aux1=0,aux2=0,aux3=0;
        for(int i=0;i<this->totalMateria;i++){
        	aux1=this->materia[i]->getPeso();
        	aux2=this->materia[i]->getNota();
        	total+=(aux1/9)*aux2;
		}
		aux3=this->unCuri;
		total=(9/aux3)*total;
		cout<<"Promedio: "<<total<<endl;
}

void Estudiante::setUnCuri(int unCuri){
	this->unCuri=unCuri;
}

void Estudiante::setTotatlMateria(int totalMateria){
	this->totalMateria=totalMateria;
}

void Estudiante::setPromedio(float promedio){
	this->promedio=promedio;
}

void Estudiante::setMateria(Materia **materia){
	this->materia=materia;
}

int Estudiante::getUnCuri(){
	return this->unCuri;
}

int Estudiante::getTotalMateria(){
	return this->totalMateria;
}

float Estudiante::getPromedio(){
	return this->promedio;
}

Materia **Estudiante::getMateria(){
	return this->materia;
}

Materia *Estudiante::getMateria(int p){
	return this->materia[p];
}

Estudiante::~Estudiante(){
	
}
