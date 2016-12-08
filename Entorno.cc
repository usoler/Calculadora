#include "Entorno.hh"

using namespace std;

Entorno::Entorno(){
	inicializar_primitivas();
}

Entorno::~Entorno(){}

void Entorno::anadir_operacion(const Operacion& op){
	(this->operaciones).push_back(op);	
}

void Entorno::anadir_variable(const pair<string,int>& var){
	(this->variables).push_back(var);
}

void Entorno::modificar_operacion(const Operacion& op){
	Operacion operacion = op;
}

void Entorno::modificar_variable(const pair<string,int>& var){
	pair<string,int> variable = var;
}

void Entorno::inicializar_primitivas(){
	list<string> list;
	list.push_back("x");
	anadir_operacion(Operacion("-","(- x)",list));
	anadir_operacion(Operacion("head","(head x)",list));
	anadir_operacion(Operacion("tail","(tail x)",list));
	anadir_operacion(Operacion("not","(not x)",list));
	list.push_back("y");
	anadir_operacion(Operacion("+","(+ x y)",list));
	anadir_operacion(Operacion("cons","(cons x y)",list));
	anadir_operacion(Operacion("=","(= x y)",list));
	anadir_operacion(Operacion("<","(< x y)",list));
	anadir_operacion(Operacion("and","(and x y)",list));
	anadir_operacion(Operacion("or","(or x y)",list));
	list.push_back("z");
	anadir_operacion(Operacion("if","(if x y z)",list));
}

bool Entorno::existe_operacion(string nombre) const{
	bool b=false;
	list<Operacion>::const_iterator it=(this->operaciones).begin();
	while(it != (this->operaciones).end() and b != true){
		Operacion operacion = *it;
		if(operacion.consultar_nombre()==nombre){
			b=true;
		}
		++it;
	}
	return b;
}

bool Entorno::existe_variable(string nombre) const{
	bool b=false;
	list<pair<string,int> >::const_iterator it=(this->variables).begin();
	while(it != (this->variables).end() and b != true){
		pair<string,int> variable = *it;
		if(variable.first == nombre){
			b=true;
		}
		++it;
	}
	return b;
}

int Entorno::consultar_numero_operaciones() const{
	return (this->operaciones).size();
}

int Entorno::consultar_numero_variables() const{
	return (this->variables).size();
}

Operacion Entorno::consultar_operacion(string nombre){
	bool b=false;
	list<Operacion>::const_iterator it=(this->operaciones).begin();
	Operacion operacion;
	while(it != (this->operaciones).end() and b != true){
		operacion = *it;
		if(operacion.consultar_nombre()==nombre){
			b=true;
		}
		++it;
	}
	return operacion;
}

pair<string,int> Entorno::consultar_variable(string nombre){
	bool b=false;
	list<pair<string,int> >::const_iterator it = (this->variables).begin();
	pair<string,int> variable;
	while(it != (this->variables).end() and b != true){
		variable = *it;
		if(variable.first == nombre){
			b=true;
		}
		++it;
	}
	return variable;
}