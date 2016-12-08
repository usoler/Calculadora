/** @file operacion.hh
	@brief Especificacion de la clase Operacion
*/

#ifndef OPERACION_HH
#define OPERACION_HH

#ifndef NO_DIAGRAM
#include <string>
#include <list>
#include <iostream>
#endif

/** @class Operacion
	@brief Representa una operacion con atributos nombre, expresion y variables
*/

class Operacion{

public:	
	// Constructoras

	/** @brief Creadora por defecto.
	
		Se ejecuta automaticamente al declarar una operacion.
		\pre <em>cierto</em>
		\post El resultado es una operacion vacia
	*/
	Operacion();

	/** @brief Creadora con valores concretos.

		\pre <em>cierto</em>
		\post El resultado es una operacion con NOMBRE = nombre, EXPRESION = expresion i VARIABLES = variables
	*/
	Operacion(std::string nombre, std::string expresion, std::list<std::string> variables);

	// Destructores

	/** @brief Destructora por defecto.
	*/
	~Operacion();

	// Modificadores
	
	/** Calculadora de la operacion
		\pre <em>cierto</em>
		\post El resultado de resolver la operacion
	*/
	std::string calcular_operacion(std::list<std::string> datos);

	// Consultores

	/** Consultora del nombre
		\pre <em>cierto</em>
		\post El resultado es el NOMBRE del parametro implicito
	*/
	std::string consultar_nombre() const;

	/** Consultora de la expresion
		\pre <em>cierto</em>
		\post El resultado es la EXPRESION del parametro implicito
	*/
	std::string consultar_expresion() const;

	/** Consultora del numero de variables
		\pre <em>cierto</em>
		\post El resultado es el numero de variables del parametro implicito
	*/
	int consultar_numero_variables() const;

private:
	// Tipo de modulo: datos
	// Descripcion del tipo: contiene el nombre de una operacion,
	// que es un string, la expresion de dicha operacion, tambien
	// string, i las variables de la expresion, almacenadas en una
	// lista de strings

	// Atributos

	std::string nombre;
	std::string expresion;
	std::list<std::string> variables;
};
#endif