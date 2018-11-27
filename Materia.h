#ifndef MATERIA_H
#define MATERIA_H

class Materia
{
	private:
		int peso,nota;
	    char nombreM[10];
	public:
		Materia();
		Materia(int ,int ,char []);
		~Materia();
		
		void cargarDat();
		void mostrarDat();
		
		void setPeso(int peso);
		void setNota(int nota);
		void setNombreM(char nombre[]);
		
		char *getNombrem();
		int getPeso();
		int getNota();
		
	protected:
};

#endif
