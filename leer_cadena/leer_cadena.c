#include <stdio.h>

int contar_cadena(char *a);

int main(void)
{
	char nombre[20];
	printf("Ingrese su nombre: ");
	scanf("%s",nombre);
	int resultado=contar_cadena(nombre);
	printf("El resultado es: %d", resultado);

	return (0);
}

int contar_cadena(char *a)
{
	int contador=0;
	/*	Inicializamos i en 0, vamos buscando en la cadena por indice y contamos, cuando llegamos 
	  a '\0' es el final de la cadena y salimos*/
	for(int i=0;a[i]!='\0';i++)
	{
		/*printf("%c\n",a[i]);//De esta manera imprimimos los caracteres*/
		contador++;
	}
	return (contador);
}
