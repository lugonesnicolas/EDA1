#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *archivo=fopen("structs_archivo.txt","rt");
	if(archivo==NULL){
		printf("Error al abrir el archivo\n");
		return (1);
	}
	else{
		char buffer[200];
		int bytes_leido=fread(buffer,1,200,archivo);
		if(bytes_leido<0){
			printf("Error al leer los bytes del archivo\n");
			return (1);
		}
		printf("El texto leido es:\n%s\n",buffer);
	}
	
	fclose(archivo);
	
	return (0);
}
