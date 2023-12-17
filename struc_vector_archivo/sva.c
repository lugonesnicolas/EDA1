/*Vector de structs dinamico, puntero que contiene direccion de un struct o muchos.*/
#include <stdio.h>
#include <stdlib.h>

struct persona{
	char nombre [20];
	int edad;
};

void cargar_struct(struct persona *a,int c);
void struct_archivo(struct persona *a, int c);

int main(void){
	struct persona *alumnos=NULL;//Inicializo el puntero a struc persona en NULL
	int cantidad=0;
	printf("Ingrese la cantidad de alumnos que quiere registrar: ");
	scanf("%d",&cantidad);
	//Reservo la memoria para la cantidad de alumnos que quiero ingresar
	alumnos=(struct persona *)malloc(cantidad * sizeof(struct persona));//Guarda el puntero a la cantidad de struct asignada
	
	cargar_struct(alumnos,cantidad);
	struct_archivo(alumnos,cantidad);
	
	return (0);
}

void cargar_struct(struct persona *a,int c){
	for(int i=0;i<c;i++){
		printf("Ingrese el nombre del alumno numero %d: ",i);
		scanf("%s",a[i].nombre);
		printf("Ingrese la edad del alumno numro %d: ",i);
		scanf("%d",&a[i].edad);
	}	
}

void struct_archivo(struct persona *a, int c){
	FILE *archivo=fopen("structs_archivo.txt","wt");
	for(int i=0;i<c;i++){
		printf("Alumno: %s %d años\n",a[i].nombre,a[i].edad);
		fprintf(archivo,"%d)Alumno: %s Edad:%d\n",i+1,a[i].nombre,a[i].edad);
	}
	fclose(archivo);
}
