#include <stdio.h>
#include<stdlib.h>

struct persona{
	char nombre[10];
	short edad;
};

int main(void){
	FILE *archivo=fopen("struct_dinamica.bin","rb");
	struct persona alumno;
	int posicion;
	posicion = ftell(archivo);//Obtengo el puntero
	fseek(archivo,0,SEEK_SET);//Lo posiciono en el bit 0
	for(int i=0;i<3;i++){
		fread(&alumno,sizeof(struct persona),1,archivo);//Leo 1 struct
		printf("Alumno:%s ",alumno.nombre);
		printf("Edad:%hd\n",alumno.edad);
		posicion += sizeof(struct persona);//Sumo el tamaño del struct
		fseek(archivo, posicion, SEEK_SET);//Muevo el puntero
	}
	
	fclose(archivo);
	
	return (0);
}
