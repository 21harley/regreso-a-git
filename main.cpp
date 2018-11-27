#include <iostream>
#include "Persona.h"
#include "Materia.h"
#include<string.h>
#include "Estudiante.h"

using namespace std;

int main(int argc, char** argv) {
	 
      Materia **b=new Materia*[2];

      b[1]=new Materia(4,5,"Progra");
      b[2]=new Materia(4,6,"fisica");
      
	  Estudiante *a=new Estudiante(22,"John",202.5,'M',2,6,b);
 
	  a->mostrarDatos();
	return 0;
}
