#include <iostream>
#include "Persona.h"
#include "Materia.h"
#include<string.h>
#include "Estudiante.h"

using namespace std;

int main(int argc, char** argv) {
	 
      Materia **b=new Materia*[7];
      b[0]=new Materia(4,5,"Mate");
      b[1]=new Materia(4,5,"Progra");
      b[2]=new Materia(4,6,"fisica");
      b[3]=new Materia(1,6,"lab fisica");
      b[4]=new Materia(2,7,"ingles ");
      b[5]=new Materia(2,6,"teoria");
      b[6]=new Materia(1,9,"ciencia y sociedad ");
      
	  Estudiante *a=new Estudiante(22,"John",202.5,'M',7,6,b);
 
	  a->mostrarDatos();
	return 0;
}
