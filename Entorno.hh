/** @file Entorno.hh
	@brief Especificacion de la clase Entorno
*/

#ifndef ENTORNO_HH
#define ENTORNO_HH

#include "Operacion.hh"

/** @class Entorno
	@brief Representa el entorno de operaciones y variables
*/

class Entorno{

public:

	// Constructoras

	/** @brief Creadora por defecto.

		Se ejecuta automaticamente al declarar un entorno.
		\pre <em>cierto</em>
		\post El resultado es un entorno vacio
	*/

	Entorno();

	// Destructoras

	/** @brief Destructora por defecto.
	*/
	~Entorno();

	// Modificadoras

	/** @brief Anade una operacion al entorno
		\pre El parametro implicito no contiene ninguna operacion con el NOMBRE de op
		\post Se ha anadido la operacion op al parametro implicito
	*/
	void anadir_operacion(const Operacion& op);

	/** @brief Anade una variable al entorno
		\pre El parametro implicito no contiene ninguna variable con el NOMBRE de var
		\post Se ha anadido la variable var al parametro implicito
	*/
	void anadir_variable(const std::pair<std::string,int>& var);

	/** @brief Modifica una operacion existente
		\pre Existe una operacion en el parametro implicito con el NOMBRE de op
		\post La operacion del parametro implicito original con el NOMBRE de op, ha quedado sustituido por op 
	*/
	void modificar_operacion(const Operacion& op);

	/** @brief Modifica una variable existente
		\pre Existe una variable en el parametro implicito con el NOMBRE de var
		\post La variable del parametro implicito original con el NOMBRE de var, ha quedado sustituido por var
	*/
	void modificar_variable(const std::pair<std::string,int>& var);

	/** @brief Inicializa las operaciones primitivas
		\pre <em>cierto</em>
		\post Se han anadido las operaciones primitivas en el parametro implicito 
	*/
	void inicializar_primitivas();

	// Consultores

	/** @brief Consultora de la existencia de la operacion
		\pre <em>cierto</em>
		\post El resultado indica si existe la operacion en el parametro implicito con NOMBRE = nombre 
	*/
	bool existe_operacion(std::string nombre) const;

	/** @brief Consultora de la existencia de la variable
		\pre <em>cierto</em>
		\post El resultado indica si existe una variable en el parametro implicito con NOMBRE = nombre
	*/
	bool existe_variable(std::string nombre) const;

	/** @brief Consultora del numero de operaciones del entorno
		\pre <em>cierto</em>
		\post El resultado es el numero de operaciones que contiene el parametro implicito
	*/
	int consultar_numero_operaciones() const;

	/** @brief Consultora del numero de variables del entorno
		\pre <em>cierto</em>
		\post El resultado es el numero de variables que contiene el parametro implicito
	*/
	int consultar_numero_variables() const;

	/** @brief Consultora de la operacion del entorno
		\pre Existe una operacion en el parametro implicito con NOMBRE = nombre
		\post El resultado es la operacion con NOMBRE = nombre que contiene el parametro implicito
	*/
	Operacion consultar_operacion(std::string nombre);

	/** @brief Consultora de la variable del entorno
		\pre Existe una variable en el parametro implicito con NOMBRE = nombre
		\post El resultado es la variable con NOMBRE = nombre que contiene el parametro implicito
	*/
	std::pair<std::string,int> consultar_variable(std::string nombre);

private:

	// Tipo de modulo: datos
	// Descripcion del tipo: representa un entorno de operaciones
	// y de variables almacenadas

	// Atributos

	std::list<Operacion> operaciones;
	std::list<std::pair<std::string,int> > variables;

};
#endif