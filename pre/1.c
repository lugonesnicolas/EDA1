//Crear una matriz dinamica con datos de alumnos, nombre y edad. La forma mas correcta es utilizando struct
#include <stdio.h>
#include <stdlib.h>

struct persona{
	char *nombre;
	int edad;
};

int main(void){
	struct persona *alumnos=NULL;
	int filas=0;
	printf("Ingrese la cantidad de personas que desea cargar: ");
	scanf("%d",&filas);
	alumnos=(struct persona *)malloc(filas * sizeof(struct persona));//Creamos 2 filas con punteros a struct
	
	for(int i=0;i<filas;i++){
		alumnos[i].nombre=(char *)malloc(20 * sizeof(char));//Creo el espacio para 20 chares en el puntero a char
		printf("Ingrese el nombre de el alumno numero %d: ",i);
		scanf("%s",alumnos[i].nombre);
		printf("Ingrese la edad del alumno numero %d: ",i);
		scanf("%d",&alumnos[i].edad);
	}
	
	for(int i=0;i<filas;i++){
		printf("Alumno:%s, Edad:%d.\n",alumnos[i].nombre,alumnos[i].edad);
	}
	
	return (0);
}
