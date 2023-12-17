/*Ordenar vector de menor a mayor
  Se analiza el primer elemento con todos los que le siguen en el vector y se consigue el menor de todos en el primer lugar
  Luego de sigue con los lugares consecutivos*/
#include <stdio.h>

void ordenar(int v[],int tam);
void imprimir_vector(int v[], int tam);

int main(void)
{
	int vector[]={3,2,5,2};
	int cantidad=sizeof(vector)/sizeof(vector[0]);

	imprimir_vector(vector,cantidad);
	printf("\n");
	ordenar(vector, cantidad);
	imprimir_vector(vector,cantidad);
	
	
	
	return (0);
}

void ordenar(int v[], int tam)
{
	int aux=0;
	for(int i=0;i<tam;i++){
		for(int j=i+1;j<tam;j++){
			if(v[i]>v[j]){
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}	
		}
	}
}

void imprimir_vector(int v[], int tam)
{
	for(int i=0;i<tam;i++){
		printf("V[%d]=%d ",i,v[i]);
	}
}
