#include <stdio.h>
/*Funcion que recibe un vector numerico de enteros y devuelva por referencia cantos de los datos
 son pares y cuantos son impares*/

//Pasamos el vector por puntero, cantidad, pares por puntero y impares por puntero
void par_impar(short *a_vector, short b_cantidad,short *pares,short *impares);

int main(void)
{
	short vector[]={2,4,6,8,3};//Vector
	short cantidad=sizeof(vector)/sizeof(vector[0]);//Cantidad de elementos
	short pares=0;//Inicio las variables en 0 por la posible basura
	short impares=0;
	par_impar(vector,cantidad,&pares,&impares);//Ejecuto la funcion
	printf("Los numero pares son %hd\n",pares);
	printf("Los numero impares son %hd\n",impares);
	
	return (0);
}

void par_impar(short *a_vector, short b_cantidad,short *pares,short *impares)
{
	for(int i=0;i<b_cantidad;i++)
	{
		if(a_vector[i]%2==0)
		{
			(*pares)++;//Agrego un par
		}
		else
		{
			(*impares)++;//Agrego un impar
		}
	}
}
