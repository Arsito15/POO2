#include "Personas.cpp"
#include <iostream>
using namespace std;

class Clientes : Personas {
	//atributos 
	private : string nit;
	private : double cui;
	
	//constructor
	public : 
	 Clientes (){
	 }
	 	 
	 Clientes (string nom,string ape, string dir,string fec,int tel,string n,double qi) : Personas(nom,ape,dir,tel,fec){
	 	nit = n;
	 	cui= qi;
	 }
	 //metodos
	 //set (modificar)
	 void setNit(string n){nit = n;}
	 void setNombres(string nom){nombres = nom;}
	 void setApellidos(string ape){apellidos = ape;}
	 void setDireccion(string dir){direccion = dir;}
	 void setFecha(string fec){fecha = fec;}
	 void setTelefono(int tel){telefono = tel;}
	 void setCui(double qi){cui = qi;}
	 //get (mostrar)
	 string getNit(){return nit;}
	 string getNombres(){return nombres;}
	 string getApellidos(){return apellidos;}
	 string getDireccion(){return direccion;}
	 string getFecha(){return fecha;}
	 int getTelefono(){return telefono;}
	 double getCui(){return cui;}
	 
	 //metodos
	 void mostrar(){
	 	cout<<"______________"<<endl;
	 	cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<cui<<","<<fecha<<endl;
	 	
	 }
};  	
