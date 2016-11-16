#ifndef _OPERACION_HH_
#define _OPERACION_HH_

#include <string>
#include <list>

class Operacion{
	private: 
	// Atributos
		string operador;
		list<int> operandos;

	public:
	// Constructores
		Operacion();
		Operacion(string operador,list<int> operandos);
	// Destructores
	// Modificadores
		int suma(list<int> operandos);
		int signe(int operando);
		list<int> cons(list<int> operandos);
		int head(list<int> operandos);
		list<int> tail(list<int> operandos);
		int equal(int operando1,int operando2);
		int menor(int operando1,int operando2);
		int not(int operando);
		int and(int operando1,int operando2);
		int or(int operando1,int operando2);
		list<int> ifOp(int boolea,list<int> operando1,list<int> operando2);
	// Consultores
		string consultar_operador();
		int numero_operandos();
	// Lectura i/o Escritura

};

#endif