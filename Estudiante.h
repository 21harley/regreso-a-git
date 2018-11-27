#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "Persona.h" 
#include "Materia.h" 

class Estudiante :public Persona
{
	private:
		int totalMateria;
		int unCuri;
		float promedio;
		Materia **materia;
	public:
		Estudiante();
		Estudiante(int ,char [],float ,char ,int ,float ,Materia **);
		~Estudiante();
		
		void cargarDatos();
		void mostrarDatos();
		
		void calcularPromedio();
		void setTotatlMateria(int );
		void setPromedio(float );
		void setMateria(Materia **);
		void setUnCuri(int );
		
		int getUnCuri();
		int getTotalMateria();
		float getPromedio();
		Materia **getMateria();
		Materia *getMateria(int p);
		
	protected:
};

#endif
