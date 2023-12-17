/*Matriz de 3x3 de numeros enteros
  fila1=123
  fila2=246
  fila3=369
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int **matriz=NULL;
	matriz=(int **)malloc(3 * sizeof(int *));
	for(int i=0;i<3;i++){
		matriz[i]=(int *)malloc(3 * sizeof(int));
		for(int j=0;j<3;j++){
			matriz[i][j]=(i+1)*(j+1);
		}
	}
	
	printf("Matriz guardada en el archivo\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}
	
	FILE *archivo=fopen("matriz.bin","wb");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			fwrite(&matriz[i][j],sizeof(int),1,archivo);
		}
	}
	fclose(archivo);
	
	FILE *archivo_leido=fopen("matriz.bin","rb");
	int numero=0;
	int **matriz_leida=NULL;
	matriz_leida=(int **)malloc(3 * sizeof(int *));
	for(int i=0;i<3;i++){
		matriz_leida[i]=(int *)malloc(3 * sizeof(int));
		for(int j=0;j<3;j++){
			fread(&numero, sizeof(int), 1, archivo_leido);
			matriz_leida[i][j]=numero;
		}
	}
	
	
	printf("Matriz leida del archivo\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}
	
	
	return (0);
}
