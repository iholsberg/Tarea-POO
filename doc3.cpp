#include "doc2.cpp"
#include<iostream>
using namespace std;
main(){
	string codigo, puesto, nombre;
	int sueldo;
	
	cout<<"Ingrese su codigo: ";
	cin>>codigo;
	cout<<"Ingrese su puesto: ";
	cin>>puesto;
	cout<<"Ingrese su nombre: ";
	cin>>nombre;
	cout<<"Ingrese su sueldo: ";
	cin>>sueldo;
	
	//Instancia de un Objeto
	Empleado obj = Empleado(puesto,nombre,sueldo,codigo);
	obj.mostrar();
		
}
