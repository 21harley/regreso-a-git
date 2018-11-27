#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
#include<string.h>

class Persona
{
	private:
		int edad;
		char nombre[20];
		float dinero;
		char sexo;
	public:
		Persona();
		Persona(int ,char [],float ,char );
		void cargarDatos();
		void mostrarDatos();
		~Persona();
		
		void setEdad(int edad);
		void setNombre(char nombre[]);
		void setDinero(float dinero);
		void setSexo(char sexo);
		
		int getEdad();
		char *getNombre();
		float getDinero();
		char getSexo();
		
	protected:
};

#endif
