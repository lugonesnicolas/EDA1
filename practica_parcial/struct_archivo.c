/*Escribir un entero y un string en un archivo binario.*/
#include <stdio.h>
#include <string.h>

struct persona{
	char nombre[30];
	int edad;
};

int main(void){
	struct persona alumno;
	struct persona leer;
	
	printf("Ingrese su nombre: ");
	scanf("%s",alumno.nombre);
	fflush(stdin);
	printf("Ingrese su edad: ");
	scanf("%d",&alumno.edad); 
	fflush(stdin);
	
	FILE *archivo=fopen("struct.bin","wb");
	fwrite(&alumno,sizeof(struct persona),1,archivo);
	fclose(archivo);
	
	FILE *archivo_lectura=fopen("struct.bin","rb");
	fread(&leer,sizeof(struct persona),1,archivo_lectura);
	fclose(archivo_lectura);
	printf("Nombre:%s Edad:%d\n",leer.nombre,leer.edad);
	
	
	return (0);
}
