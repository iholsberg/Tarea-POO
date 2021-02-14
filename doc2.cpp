#include "doc1.cpp"
#include<iostream>
using namespace std;
	class Empleado : empleado{
			// atributos
	private : string codigo;
	
	//constructor
	public : Empleado (){
	}
	Empleado(string puest, string nom, int suel, string codi) : empleado(puest,nom,suel){
		codigo = codi;
	}
	void mostrar() {
		cout<<"-------------------"<<endl;
		cout<<codigo<<","<<puesto<<","<<nombre<<","<<sueldo<<endl;
	}	
		
	};



