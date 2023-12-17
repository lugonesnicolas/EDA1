#include <stdio.h>
#include<stdlib.h>

struct persona{
	char nombre[10];
	short edad;
};

int main(void){
	FILE *archivo=fopen("struct_dinamica.bin","wb");
	struct persona *alumnos=NULL;
	alumnos=(struct persona *)malloc(3 * sizeof(struct persona));//Creo en memoria para 3 structs persona
	for(int i=0;i<3;i++){
		printf("Ingrese el nombre del alumno numero %d: ",i);
		scanf("%s",alumnos[i].nombre);
		fflush(stdin);
		printf("Ingrese la edad del alumno numero %d: ",i);
		scanf("%hd",&alumnos[i].edad);
		fflush(stdin);
		fwrite(alumnos[i].nombre,10 * sizeof(char),1,archivo);
		fwrite(&alumnos[i].edad,sizeof(short),1,archivo);
	}
	free(alumnos);
	fclose(archivo);
	
	return (0);
}
