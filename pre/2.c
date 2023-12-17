/*Punteros, structs, vectores, memoria dinamica, archivo y pasaje por referencia*/
#include <stdio.h>
#include <stdlib.h>

struct persona{
	char nombre[10];
	int edad;
};

void cargar_struct(struct persona *alumno);

int main(void){
	int edad=27;
	int *p_edad=&edad;
	char nombre[]="Nicolas";
	char *p_nombre=nombre;
	printf("Alumno en base de datos\n");
	printf("Nombre:%s Edad:%d\n",p_nombre,p_edad[0]);
	struct persona *alumno=NULL;//alumno guarda un puntero a struct
	cargar_struct(alumno);
	
	
	return (0);
}

void cargar_struct(struct persona *alumno){
	alumno=(struct persona *)malloc(1 * sizeof(struct persona));//Creo un puntero a struct del tamaño de un struct persona
	//alumno=(struct persona *)realloc(alumno,1 * sizeof(struct persona));//Reasigno la memoria de alumno en 1 struct mas
	//alumno=(struct persona *)calloc(1, sizeof(struct persona));//Asigno memoria para 1 struct ya inicializado
	printf("Alumno inicializado antes de cargar\nNombre:%s Edad:%d\n",alumno->nombre,alumno->edad);
	printf("Ingrese el nombre del alumno: ");
	scanf("%s",alumno->nombre);
	printf("Ingrese la edad del alumno: ");
	scanf("%d",&alumno->edad);
	
	printf("Alumno ingresado\nNombre:%s Edad:%d\n",alumno->nombre,alumno->edad);
}
