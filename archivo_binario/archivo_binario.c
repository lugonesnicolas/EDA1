#include <stdio.h>
#include <string.h>

int main(void)
{
	//Ingreso de datos
	int edad;
	char nombre[20];
	printf("Ingrese su nombre: ");
	scanf("%s",nombre);
	fflush(stdin);
	printf("Ingrese su edad: ");
	scanf("%d",&edad);
	fflush(stdin);
	
	//Creacion del archivo
	FILE *archivo;
	archivo=fopen("nombre_edad.bin","wb+");
	fwrite(nombre,sizeof(strlen(nombre)),1,archivo);
	fwrite(&edad,sizeof(int),1,archivo);
	fclose(archivo);
	
	//Lectura del archivo
	int edad_leida;
	char nombre_leido[20];
	archivo=fopen("nombre_edad.bin","rb");
	fread(nombre_leido,sizeof(strlen(nombre_leido)),1,archivo);
	printf("Nombre leido: %s\n",nombre_leido);
	fread(&edad_leida,sizeof(int),1,archivo);
	printf("Edad leida: %d\n",edad_leida);
	fclose(archivo);
	
	return (0);
}
