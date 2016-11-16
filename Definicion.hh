#ifndef _DEFINICION_HH_
#define _DEFINICION_HH_

#include "Operacion.hh"
#include <list>
#include <string>

class Definicion{
	private: 
	// Atributos
		string nom;
		list<int> operandos;
	public:
	// Constructores
		Definicion();
		Definicion(string nom,list<int> operandos);
		Definicion(string nom,list<int> parametros,list<int> operandos);
	// Destructores
	// Modificadores
	// Consultores
	// Lectura i/o Escritura
};

#endif