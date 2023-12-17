#include <stdio.h>
#include <stdlib.h>

void cargar_matriz(int **m, int f, int c);
void archivo_matriz(int **m, int f, int c);

int main(void){
	int filas=0;
	int columnas=0;
	printf("Ingrese las filas que va a tener la matriz: ");
	scanf("%d",&filas);
	printf("Ingrese las columnas que va a tener la matriz: ");
	scanf("%d",&columnas);
	
	
	int **matriz = NULL;//Inicio el puntero
	matriz=(int **)malloc(filas*sizeof(int*));//Memoria para 2 filas, espacio de punteros a entero
	for(int i=0;i<filas;i++){
		matriz[i]=(int *)malloc(columnas*sizeof(int));//Memoria a cada fila 3 columnas, espacio de enteros
	}
	
	cargar_matriz(matriz,filas,columnas);
	archivo_matriz(matriz,filas,columnas);
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			printf("Matriz[%d][%d]=%d\n",i,j,matriz[i][j]);
		}
	}
	
	return (0);
}

void cargar_matriz(int **m, int f, int c)//f=puntero de puntero a int
{
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			m[i][j]=j;
		}
	}
}

void archivo_matriz(int **m, int f, int c)//f=puntero de puntero a int
{
	FILE *archivo=fopen("matriz.bin","wb");
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			//fprintf(archivo,"%d",m[i][j]);
			fwrite(&m[i][j],sizeof(int),1,archivo);
		}
	}
	fclose(archivo);
}
