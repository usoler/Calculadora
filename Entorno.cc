#include "Entorno.hh"

Entorno::Entorno(){}

Entorno::~Entorno(){}

void Entorno::anadir_operacion(const Operacion& op){}

void Entorno::anadir_variable(const pair<string,int>& var){}

void Entorno::modificar_operacion(const Operacion& op){}

void Entorno::modificar_variable(const pair<string,int>& var){}

void Entorno::inicializar_primitivas(){}

bool Entorno::existe_operacion(string nombre){
	bool b=false;
	list<Operacion> list = this->operaciones;
	list<Operacion>::const_iterator it=list.begin();
	while(it != list.end() and b != true){
		Operacion operacion = *it;
		if(operacion.consultar_nombre()==nombre){
			b=true;
		}
		++it;
	}
	return b;
}

bool Entorno::existe_variable(string nombre){}

int Entorno::consultar_numero_operaciones(){
	list<Operacion> list = this->operaciones;
	return list.size();
}

int Entorno::consultar_numero_variables(){}

Operacion Entorno::consultar_operacion(string nombre){
	bool b=false;
	list<Operacion> list = this->operaciones;
	list<Operacion>::const_iterator it=list.begin();
	Operacion operacion;
	while(it != list.end() and b != true){
		operacion = *it;
		if(operacion.consultar_nombre()==nombre){
			b=true;
		}
		++it;
	}
	return operacion;
}

pair<string,int> Entorno::consultar_variable(string nombre){}