#include "Operacion.hh"

using namespace std;

Operacion::Operacion(){}

Operacion::Operacion(string nombre, string expresion, list<string> variables){
	this->nombre = nombre;
	this->expresion = expresion;
	this->variables = variables;
}

Operacion::~Operacion(){}

string Operacion::calcular_operacion(list<string> datos){
	string res;
	if(datos.size() == (this->variables).size()){
		if(this->nombre == "+"){
			list<string>::const_iterator it=datos.begin();
			int sum=0;
			while(it != datos.end()){
				int value=atoi((*it).c_str());
				sum+=value;
				++it;
			}
			res=to_string(sum);
		}
	}else{
		res="indefinido";
	}
	return res;
}

string Operacion::consultar_nombre() const{
	return this->nombre;
}

string Operacion::consultar_expresion() const{
	return this->expresion;
}

int Operacion::consultar_numero_variables() const{
	return (this->variables).size();
}