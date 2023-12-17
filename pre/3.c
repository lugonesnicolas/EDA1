#include <stdio.h>
#include <stdlib.h>

int main(void){
	char buffer[500];
	char linea[50];
	FILE *archivo=fopen("alumnos.txt","rt");
	
	printf("Recorro el archivo linea por linea con feof y fgets\n");
	while(!feof(archivo)){
		if(fgets(linea,50,archivo)!=NULL){
			printf("%s",linea);
		}
	}
	
	printf("\nObtengo el texto con fread, poniendo el puntero devuelta al inicio con rewind\n");
	rewind(archivo);
	fread(buffer,500,1,archivo);
	printf("%s",buffer);
	printf("\n");
	
	rewind(archivo);
	char caracter;
	printf("Imprimo el texto caracter a caracter con rewind y fgetc\n");
	while(!feof(archivo)){
		if((caracter=fgetc(archivo))!= EOF){
			printf("%c",caracter);
		}
	}
	printf("\n");
	
	
	fclose(archivo);
	
	
	return (0);
}
