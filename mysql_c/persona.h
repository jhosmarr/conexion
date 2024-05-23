#pragma once
#include <iostream>
using namespace std;
class persona{
	class persona {
		//atribtos:nombre,apellidos,direccion,telefono
	protected: string nombres, apellidos, direccion, fecha_nacimiento;
			 int telefono=0;
			 //constructor 
	protected:
		persona() {
		}

		persona(string nom, string ape, string dir, int tel, string fn) {
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
			fecha_nacimiento = fn;
		}
		//metodos crud = crear,leer,actualizar,borrar
		void crear();
		void leer();
		void actualizar();
		void borrar();

	};
};

