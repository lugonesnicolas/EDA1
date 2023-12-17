/*Matriz de enteros dinamica*/
#include <stdio.h>
#include <stdlib.h>
#define cantidad 3

int main(void){
	/*Apunto los punteros a NULL*/
	int **fila=NULL;//Columna contiene la direccion de fila por eso puntero de puntero
	int *columna=NULL;//Fila contiene la direccion de un entero
	/*	Asigno la memoria dinamica a los punteros*/
	fila=(int **)malloc(sizeof(int *));//Asigno a fila el tamaño de memoria de un puntero a entero
	columna=(int *)malloc(cantidad * sizeof(int));//Asigno a columna el tamaño de un entero x cantidad que son la cantidad de elemntos por fila
	
	*fila=columna;
	
	if(columna!=NULL && fila!=NULL){
		for(int i=0;i<cantidad;i++){
			printf("%d) Ingrese un entero: ",i);
			scanf("%d", &fila[0][i]);//En la primera fila, escaneo el dato por indice
			/*scanf("%d",&(*fila)[i]);//Tambien se puede hacer de esta manera*/
		}
	}
	
	for(int i=0;i<cantidad;i++){//Recorremos de 0 a 4 saliento en 5
		printf("Matriz[0][%d]=%d\n",i,fila[0][i]);
	}
	
	return (0);
}
