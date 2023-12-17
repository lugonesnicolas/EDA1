/*Funcion que cuente una cadena de caracteres y verifique si su longitud esta <= 10*/
#include <stdio.h>
#include <string.h>

int cantidad_cadena(char cadena[]);

int main(void){
	char nombre[20];
	printf("Ingrese un texto de 10 caracteres\n");
	scanf("%s", nombre);
	
	printf("La cantidad de caracteres es: %d\n",cantidad_cadena(nombre));
	
	if(cantidad_cadena(nombre)<=10){
		printf("La cadena esta en el rango de 10 caracteres\n");
	}
	else{
		printf("La cadena exede el rango de caracteres");
	}
	
	return (0);
}

/*Cuento los caracteres hasta llegar al final hasta encontrar a '\0'
  mientras tenga caracteres aumento el contador*/
int cantidad_cadena(char cadena[]){
	int contador=0;
	for(int i=0;cadena[i]!='\0';i++){
		contador++;
	}
	
	return (contador);
}
