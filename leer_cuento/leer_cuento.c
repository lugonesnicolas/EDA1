#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>

int main(void){
	setlocale(LC_ALL, "UTF-8");
	
	char linea[500];
	FILE *patito_feo=fopen("patito_feo.txt","rt");
	
	if(patito_feo!=NULL){
		while(feof(patito_feo)==0){
			while(fgets(linea, sizeof(linea),patito_feo)!=NULL){
				printf("%s",linea);
			}	
		}
	}
	fclose(patito_feo);
	
	return (0);
}
