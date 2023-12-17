#include <stdio.h>

int main(void){
	short matriz[2][3]={//Matriz de 2 filas y 3 columnas
		{1,2,3},
		{4,5,6}
	};
	
	printf("Matriz\n");
	
	/*Para imprimir la matriz hay que recorrerla para buscar los elementos*/
	for(int i=0;i<2;i++){//Buscamos las filas
		for(int j=0;j<3;j++){//Buscamos las columnas
			printf("Matriz[%d][%d]=%hd\n",i,j,matriz[i][j]);
		}
	}
	
	return (0);
}
