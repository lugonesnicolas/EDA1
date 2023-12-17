/*Comprar pasajes de avion
  Programa que guarde en una matriz cantidad de acientos por vuelo.
  El programa debe pedir al usuario que ingrese el destino, el numero de vuelo y la cantidad de pasajes.*/
//         M  T  N
//1 españa 10 10 10
//2 uruguay 5 5 5
#include <stdio.h>

void vuelos_disponibles(int m[3][3], char *d[]);
void comprar(int m[3][3], char *d[]);

int main(void){
	char *destinos[3]= {"España","Uruguay","EEUU"};
	int matriz[3][3]= {
		{10,10,10},//España
		{5,5,5},//Uruguar
		{1,0,3}//EEUU
	};
	vuelos_disponibles(matriz,destinos);
	
	int o_destino=0;
	int o_hora=0;
	int pasajes=0;
	printf("\nEliga el numero de destino: ");
	scanf("%d",&o_destino);
	printf("Eliga el numero del turno del vuelo: ");
	scanf("%d",&o_hora);
	printf("Cuantos pasajes decea comprar: ");
	scanf("%d",&pasajes);
	printf("\n");
	
	if(pasajes<=matriz[o_destino][o_destino]){
		matriz[o_destino][o_destino]=matriz[o_destino][o_destino]-pasajes;
		printf("Usted compro %d pasaejes a %s.\n\n",pasajes,destinos[o_destino]);
	}	
	else{
		printf("No tenesmos ese cupo de vuelos\n\n");
	}

	vuelos_disponibles(matriz,destinos);
	
	
	return (0);
}

void vuelos_disponibles(int m[3][3], char *d[])
{
	for(int i=0;i<3;i++){
		printf("Cupos para volar a %s\n",d[i]);
		for(int j=0;j<3;j++){
			switch (j) {
			case 0:
				printf("Pasajes disponibles por la mañana %d\n",m[i][j]);
				break;
			case 1:
				printf("Pasajes disponibles por la tarde %d\n",m[i][j]);
				break;
			case 2:
				printf("Pasajes disponibles por la noche %d\n",m[i][j]);
				break;
			default:
				printf("Algo salio mal\n");
				break;
			}
		}
		printf("\n");
	}	
}
