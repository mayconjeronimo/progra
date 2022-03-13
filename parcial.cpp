

#include<iostream>
#include<conio.h>
using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno{
	char codigo[20];
	char nombre[10];
	int apellido;
	struct Promedio prom;
}alumno1;

int main(){
	float promedio_alumno;
	
	cout<<"Nombre: "; cin.getline(alumno1.nombre,20,'\n');
	cout<<"codigo: "; cin.getline(alumno1.codigo,10,'\n');
	cout<<"apellido: "; cin>>alumno1.apellido;
	
	cout<<".:Notas del Examen:."<<endl;
	cout<<"Nota1: "; cin>>alumno1.prom.nota1;
	cout<<"Nota2: "; cin>>alumno1.prom.nota2;
	cout<<"Nota3: "; cin>>alumno1.prom.nota3;
	
	//Sacando el promedio del alumno
	promedio_alumno = (alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3;
	
	
	cout<<"\n\nMostrando Datos"<<endl;
	cout<<"Nombre: "<<alumno1.nombre<<endl;
	cout<<"codigo: "<<alumno1.codigo<<endl;
	cout<<"apellido: "<<alumno1.apellido<<endl;
	cout<<"Promedio: "<<promedio_alumno<<endl;
	
	
	getch();
	return 0;
}
