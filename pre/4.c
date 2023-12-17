#include <stdio.h>
#include <stdlib.h>

struct persona{
	char nombre[10];
	int edad;
};

int main(void){
	int i=0;
	char linea[50];
	struct persona *alumno=NULL;
	FILE *archivo=fopen("alumnos.txt","rt");
		if(archivo != NULL){
	  while(!feof(archivo)){
	  if(fgets(linea,50,archivo)!=NULL){
	  alumno=(struct persona *)realloc(alumno,(i+1) * sizeof(struct persona));
	  sscanf(linea,"%s %d",alumno[i].nombre,&alumno[i].edad);
	  printf("Alumno:%s %d de edad\n",alumno[i].nombre,alumno[i].edad);
	  i++;
	  }
	  }
	  }
	
	/*		printf("Recorro el archivo linea por linea con feof y fgets\n");
	  while(!feof(archivo)){
	  if(fgets(linea,50,archivo)!=NULL){
	  printf("%s",linea);
	  alumno=(struct persona *)realloc(alumno,(i+1) * sizeof(struct persona));
	  sscanf(linea,"%s %d",alumno[i].nombre,&alumno[i].edad);
	  printf("Alumno:%s %d de edad\n",alumno[i].nombre,alumno[i].edad);
	  i++;
	  }
	  }*/
	
	
	fclose(archivo);
	
	
	return (0);
}
