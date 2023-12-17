#include <stdio.h>
#include <stdlib.h>


int main(void){
	int **filas=(int**)malloc(2*sizeof(int));//Quiero 2 filas y son punteros a un entero
	if(filas!=NULL){//Si tengo el espacio el creado
		for(int i=0;i<2;i++){
			int *columnas=(int*)malloc(3*sizeof(int));//Quiero 3 columnas y son punteros a int
			if(columnas!=NULL){//Si tengo el spacio creado
				for(int j=0;j<3;j++){
					columnas[j]=j;//Cargo a las columnas los valores
					filas[i]=columnas;//Cargo en filas las columas
				}	
			}	
		}
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("Matriz[%d][%d]=%d\n",i,j,filas[i][j]);
		}
	}
	
	
	
	return (0);
}
