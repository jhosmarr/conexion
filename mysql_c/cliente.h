#pragma once
#include "persona.h"
#include <mysql.h>
#include"conexionBD.h"
#include <iostream>
using namespace std;
class cliente :persona{
private: string nit;
	   //Constructor 
public:
	cliente() {
	}

	cliente(string nom, string ape, string dir, int tel, string fn, string n)
		: Persona(nom, ape, dir, tel,fn) {
		nit = n;

	}

	void setNombres(string nom) { nombres = nom; }
	void setApellidos(string ape) { apellidos = ape; }
	void setDireccion(string dir) { direccion = dir; }
	void setFecha_nacimiento(string fn) { fecha_nacimiento = fn; }
	void setTelefono(int tel) { telefono = tel; }
	void setnit(string n) { nit = n; }

	string getNombres() { return nombres; }
	string getApellidos() { return apellidos; }
	string getDireccion() { return direccion; }
	string getFecha_nacimiento() { return fecha_nacimiento; }
	int getTelefono() { return telefono; }
	string getNit() { return nit; }

	void leer() {
		int q_estado;
		conexionBD cn = conexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getconectar()) {
			string consulta = "select * from cliente";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getconectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getconectar());
				while (fila = mysql_fetch_row(resultado)) {
					cout << fila[0] << "," << fila[1] <<","<< fila[2]<<","<<fila[3]<<","<<fila[4]<<","<<fila[5]<<"," << fila[6] endl;
				}
			}
			else {
				cout << "xxx Error al consultar xxx" << endl;
			}
		}

		else {
			cout << "Error en la conexion..." << endl;
		}

		}
		else {
			cout << "Error en la conexion..." << endl;
		}
		cn.cerrar_conexion();

		
};
};

