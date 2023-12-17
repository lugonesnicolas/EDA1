#include <stdio.h>
#include <stdlib.h>

struct Nodo {
	int numero;
	struct Nodo *siguiente;//Este dato es un puntero a otro nodo
};

int main() {
	struct Nodo *primero = NULL;
	struct Nodo *segundo = NULL;
	struct Nodo *tercero = NULL;
	
	// Creamos los nodos
	primero = malloc(sizeof(struct Nodo));
	segundo = malloc(sizeof(struct Nodo));
	tercero = malloc(sizeof(struct Nodo));
	
	// Inicializamos los datos de los nodos
	primero->numero = 10;
	segundo->numero = 20;
	tercero->numero = 30;
	
	// Enlazamos los nodos
	primero->siguiente = segundo;//Asignamos el puntero al siguiento nodo
	segundo->siguiente = tercero;//Asignamos el puntero al siguiento nodo
	tercero->siguiente = NULL;//No hay mas nodos, se termina el enlaze
	
	// Imprimimos la lista
	struct Nodo *actual = primero;//Creamos un puntero al nodo para operar
	while (actual != NULL) {//Mientras el nodo no sea nulo tenemos datos
		printf("%d ", actual->numero);//Imprimo el numero
		actual = actual->siguiente;//Muevo el nodo para seguir el ciclo
	}
	printf("\n");
	
	return (0);
}
