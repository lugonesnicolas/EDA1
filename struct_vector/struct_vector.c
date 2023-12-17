#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 2

struct persona{
	char nombre[20];
	int edad;
};

//**p es un puntero a un puntero a un struct y cantidad es un entero
void cargar_struct(struct persona **p, int cantidad);//p=p->p->int o p=dir->dir->int
void imprimir_struct(struct persona *p, int cantidad);

int main(void){
	//Creo un puntero a una estructura alumnos
	struct persona *alumnos=NULL;//P->struct o dir->int
	for(int i=0;i<CANTIDAD;i++){
		cargar_struct(&alumnos, i);//&alumnos=dir->p->int
	}
	
	imprimir_struct(alumnos,CANTIDAD);
	
	free(alumnos);
	alumnos=NULL;
	
	return (0);
}

void cargar_struct(struct persona **p, int cantidad){
	//p[0]=(struct persona *)realloc(p[0],(cantidad+1) * sizeof(struct persona));
	(*p)=(struct persona *)realloc((*p),(cantidad+1) * sizeof(struct persona));
	if(p[0]!=NULL){
		printf("%d) Ingrese el nombre: ",cantidad);
		//scanf("%s",p[0][cantidad].nombre);
		scanf("%s",(*p+cantidad)->nombre);
		printf("%d) Ingrese la edad: ",cantidad);
		//scanf("%d",&p[0][cantidad].edad);
		scanf("%d",&(*p+cantidad)->edad);
	}
}

void imprimir_struct(struct persona *p, int cantidad){
	for(int i=0;i<CANTIDAD;i++){
		printf("%d) Nombre:%s, Edad:%d\n",i, p[i].nombre, p[i].edad);
	}
}
