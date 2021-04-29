/*
 * biblioteca_estructuras.h
 *
 *  Created on: Apr 28, 2021
 *      Author: jonat
 */

#ifndef BIBLIOTECA_ESTRUCTURAS_H_
#define BIBLIOTECA_ESTRUCTURAS_H_

typedef struct
{
	int legajo;
	char sexo;
	int edad;
	float nota1;
	float nota2;
	float promedio;
	char apellido[20];
	int isEmpty;
}alumno;


int mostrarMenu(int* opcion);
int inicializarIsEmpty(alumno alumnos[], int size);
int buscarLibre(alumno array[], int size);
int ingresarAlumno(alumno array[], int size);
int listarAlumno();
int listarAlumnos(alumno array[], int size);
int bajaAlumno(alumno array[], int size);
int modificarAlumno();
int ordenarAlumno();

#endif /* BIBLIOTECA_ESTRUCTURAS_H_ */
