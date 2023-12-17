#include <stdio.h>

int suma(int a, int b);

int main(void)
{
	int n_1;
	int n_2;
	int resultado;
	printf("Ingrese un numero entero: ");
	scanf("%d",&n_1);
	printf("Ingrese otro numero entero: ");
	scanf("%d",&n_2);
	resultado=suma(n_1,n_2);
	printf("El resultado es: %d", resultado);
	
	return (0);
}

int suma(int a, int b)
{
	return (a+b);
}
