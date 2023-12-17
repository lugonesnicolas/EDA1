/*Escribir un entero y un string en un archivo binario.*/
#include <stdio.h>
#include <string.h>

int main(void){
	int edad=0;
	char nombre[20];
	printf("Ingrese su nombre: ");
	scanf("%s",nombre);
	printf("Ingrese su edad: ");
	scanf("%d",&edad);
	
	
	FILE *archivo=fopen("alumnos.bin","wb");
	fwrite(nombre,sizeof(strlen(nombre)),1,archivo);
	fwrite(&edad,sizeof(edad),1,archivo);
	fclose(archivo);
	
	
	return (0);
}
