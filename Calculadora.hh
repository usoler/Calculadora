#ifndef _CALCULADORA_HH_
#define _CALCULADORA_HH_

#include "Operacion.hh"
#include "Definicion.hh"
#include <map>
#include <string>

class Calculadora{
	private: 
	// Atributos
		map<string,Operacion> operaciones;
		map<string,Definicion> definiciones;
	public:
	// Constructores
		Calculadora();
		/* Pre: cert */
		/* Post:  */
	// Destructores
	// Modificadores
		void inicializar();
		/* Pre: cierto */
		/* Post: anade al parametro implicito las operaciones primitivas (suma,resta...) */
		void anadir_operacion(Operacion& ope);
		/* Pre: ope no vacio */
		/* Post: anade la operacion ope al diccionario de operaciones del parametro implicito */
		void anadir_definicion(Definicion& defi);
		/* Pre: defi no vacio */
		/* Post: anade la definicion defi al diccionario de definiciones del parametro implicito */
	// Consultores
		bool esta_inicializada();
		/* Pre: cierto */
		/* Post: indica si el parametro implicito esta inicializado */
		int num_operaciones();
		/* Pre: cierto */
		/* Post: indica el numero total de operaciones del parametro implicito */
		int num_definiciones();
		/* Pre: cierto */
		/* Post: indica el numero total de definiciones del parametro implicito */
	// Lectura i/o Escritura
};

#endif