/*
 * bib_validadores.c
 *
 *  Created on: 12 abr. 2022
 *      Author: luciano
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "bib_menu.h"
#include "bib_validadores.h"
#include "bib_calculadores.h"


float ValidadorPositivo(float num){
	float validador;
	validador = num;
	while(validador <= 0){
		printf("\n\n !Error, ingrese un numero positivo siendo este mayor a 0: \n\n");
		scanf("%f",&validador);


	}
	return validador;
}

int ValidadorOpcioneSubmenu(int num){
	int validador;
	validador = num;
	while(validador != 1 && validador !=2 && validador !=3){
		printf("\n\n !Error, ingrese una opcion correcta: 1; 2; o 3. \n\n");
		scanf("%d",&validador);


	}
	return validador;
}
