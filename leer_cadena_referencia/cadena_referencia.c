#include <stdio.h>

int leer_cadena_referencia(char *texto);

int main(void){
	//char * cadena="Nicolas";//De esta forma apuntamos el puntero a una constante
	char cadena[20];
	printf("Ingrese su nombre: ");
	scanf("%s",cadena);
	char *puntero_cadena=cadena;//Puntero a cadena
	
	
	printf("Puntero cadena es un puntero de una cadena y contiene: %s\n", puntero_cadena);
	printf("Paso el puntero a una funcion que cuenta los caracteres: %d",leer_cadena_referencia(puntero_cadena));//Pasamos el puntero a la funcion
	
	return (0);
}

int leer_cadena_referencia(char *texto){
	int contador=0;
	
	
	for(int i=0;texto[i]!='\0';i++)//texto[i] es equivalente a *(texto+i)
	{
		printf("Caracter: %c\n", texto[i]);
		contador++;
	}
	
	return (contador);//Devolvemos el contador
}
