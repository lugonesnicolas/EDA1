/*Matriz de enteros dinamica*/
#include <stdio.h>
#include <stdlib.h>
#define cantidad 3

int main(void){
	/*Apunto los punteros a NULL*/
	int **fila=NULL;//Columna contiene la direccion de fila por eso puntero de puntero
	int *columna=NULL;//Fila contiene la direccion de un entero
	/*	Asigno la memoria dinamica a los punteros*/
	fila=(int **)malloc(2 * sizeof(int *));//Asigno a 2 filas el tamaño de memoria de un puntero a entero
	
	if(fila!=NULL){
		/*Recorro las filas*/
		for(int i=0;i<2;i++){
			columna=(int *)malloc(cantidad * sizeof(int));//Asigno a columna el tamaño de un entero x cantidad que son la cantidad de elemntos por fila
			if(columna!=NULL){
				for(int j=0;j<cantidad;j++){
					printf("[%d][%d] Ingrese un entero: ",i,j);
					scanf("%d", &columna[j]);//Cargamos los datos en las posiciones de la columna
				}
				fila[i]=columna;//Agrego la direccion de mis columnas
				/**(fila+i)=columna;*/
			}
		}
	}
	
	for(int i=0;i<2;i++){//Recorremos de 0 a 2
	  for(int j=0;j<cantidad;j++){//Recorremos de 0 a cantidad
		  printf("Matriz[%d][%d]=%d\n",i,j,fila[i][j]);
		  }
	  }
	
	return (0);
}
