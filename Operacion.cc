#include "Operacion.hh"

Operacion::Operacion(){}

Operacion::Operacion(string nombre, string expresion, list<string> variables){}

Operacion::~Operacion(){}

string Operacion::calcular_operacion(){}

string Operacion::consultar_nombre(){
	return this->nombre;
}

string Operacion::consultar_expresion(){
	return this->expresion;
}

int Operacion::consultar_numero_variables(){
	list<string> list = this->variables;
	return list.size();
}