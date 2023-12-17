#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int input_string(char**);
void print_string(char*);

int main(void){
	char *cadena=NULL;//Cadena es un puntero a char guarda una direcocion a char
	printf("Ingrese un texto: ");
	
	if(input_string(&cadena)!=-1){//Pasamos a la funcion la direccion de cadena
		printf("El texto ingresado fue: %s\n", cadena);
	}
	else{
		printf("Error en el ingreso del texto!\n");
	}
	
	print_string(cadena);
	
	return (0);
}

int input_string(char **texto){//Puntero a puntero de texto
	int indice=0;
	char caracter;
	caracter=getche();
	/*scanf("%c",&caracter);*/
	
	while(caracter!=13){
		(*texto)=realloc(*texto,(indice+1)*sizeof(char));
		if((*texto)==NULL){
			return (-1);
		}
		
		*(*texto+indice)=caracter;
		indice++;
		caracter=getche();
	}
	
	(*texto)=realloc(*texto,(indice+1)*sizeof(char));//Agrego un espacio mas para cerrar mi estructura
	*(*texto+indice)=0;//Agrego el null a mano para cerrar el string
	
	return (1);//Terminamos
}

void print_string(char *texto)
{
	int longitud=strlen(texto);
	for(int i=0;i<longitud;i++){
		printf("%c",texto[i]);
	}
}
