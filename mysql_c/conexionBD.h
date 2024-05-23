#pragma once
#include <mysql.h>
#include <iostream>
using namespace std;
class conexionBD{
private:MYSQL* conectar;
public: 
		   void abrir_cconexion() {
			   conectar = mysql_init(0);
			   conectar = mysql_real_connect(conectar, "localhost", "root", "Marroquin*5008", "db_empresa", 3306, NULL, 0);

	   }
		   void cerrar_conexion() {
			   mysql_close(conectar);
		   }
		   MYSQL* getconectar() {
			   return conectar;
		   }
};

