#include<iostream>
using namespace std;
class empleado{
	protected: string puesto, nombre;
					int sueldo;
	//constructor
	protected: empleado(){
		} empleado(string puest, string nom, int suel){
					puesto = puest;
					nombre = nom;
					sueldo = suel;
					}
	
	//Metodo
	void mostrar();		
	};







