#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int input_string(char**texto);//**texto=direccion de direccion de un char
void imprimir_string(char **texto);//*texto=direccion de un char
void imprimir_string_2(char *texto);


int main(void){
	/*cadena contiene la dirección de memoria de una variable de tipo char*/
	//*puntero = direccion a char = char
	char *cadena=NULL;//Puntero a char
	
	if(input_string(&cadena)!=-1){//Direccion de un puntero a char
		printf("El texto ingresado fue: %s\n", cadena);
	}
	else{
		printf("Error en el ingreso del texto!\n");
	}
	
	printf("Imprimir_string\n");
	imprimir_string(&cadena);
	printf("Imprimir_string_2\n");
	imprimir_string_2(cadena);
	
	return (0);
}

/*Funcion que recibe un puntero de puntero a char */
//**puntero = direccion a *puntero = direccion char = char
int input_string(char **texto){//texto=&->&->ch||texto[][]
	char caracter;
	int i=0;
	do{//Ingreso caracteres
		printf("Ingrese un texto: ");
		scanf("%c",&caracter);
		texto[0]=realloc(texto[0],(i+1) * sizeof(char));
		texto[0][i]=caracter;
		i++;
	}while(caracter!='\n');//Mientras el caracter ingresado no sea \n
	
	texto[0]=realloc(texto[0],(i+1) * sizeof(char));
	texto[0][i]='\0';
	
	return (1);
}

void imprimir_string_2(char *texto)
{
	printf("Imprimo mi string con el formato texto[i]\n");
	for(int i=0;texto[i]!='\n';i++){
		printf("texto[%d]=%c\n",i,texto[i]);
	}
	
	printf("\nImprimo mi string con el formato texto[i]\n");
	
	for(int i=0;texto[i]!='\n';i++){
		printf("texto[%d]=%c\n",i,texto[i]);
	}
}

void imprimir_string(char **texto)
{
	printf("Imprimo mi string con el formato texto[0][i]\n");
	for(int i=0;texto[0][i]!='\n';i++){
		printf("texto[%d]=%c\n",i,texto[0][i]);
	}
	
	printf("\nImprimo mi string con el formato (*texto)[i]\n");
	
	for(int i=0;(*texto)[i]!='\n';i++){
		printf("texto[%d]=%c\n",i,(*texto)[i]);
	}
}
