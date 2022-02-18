#include<iostream>
using namespace std;
class Personas{
	//atributos
	protected : string nombres,apellidos,direccion;
	int telefono;
	string fecha;
	
	//constructor 
	protected :
			Personas(){
			}  
			Personas(string nom,string ape,string dir,int tel, string fec){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
				fecha = fec;
			} 
	
	
	//metodo
	void mostrar();
	 
};
