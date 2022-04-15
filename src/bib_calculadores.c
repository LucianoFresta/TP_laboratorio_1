/*
 * bib_calculadores.c
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


float CalculadorDeCostos( double precio, float numX, int tipo){

	float resul;


	if (tipo ==1 ){
		resul = precio - (precio * 0.1);
	}else if (tipo == 2){
		resul = precio + (precio * 0.25);
	}else if(tipo ==3){
		resul = (precio / 4606954.55);
	}else if(tipo == 4){
		resul = precio / numX;
	}else if(tipo == 5){
		if (precio > numX){
			resul = precio - numX;
		}else{
			resul = numX - precio;
		}
	}

	return resul;


}




void CargaForzadaDefault (void){

	int kmForz = 7090;
	int latamForz = 159339;
	int aeroForz = 162965;
	int latamdebForz;
	int latamcredForz;
	float latambitForz;
	int precioXKMlatamForz;
	int aerodebForz;
	int aerocredForz;
	float aerobitForz;
	int precioXKMaeroForz;
	int difAeLatForz;


	latamdebForz = CalculadorDeCostos(latamForz, kmForz, 1);
	latamcredForz= CalculadorDeCostos(latamForz, kmForz, 2);
	latambitForz= CalculadorDeCostos(latamForz, kmForz,  3);
	precioXKMlatamForz= CalculadorDeCostos(latamForz, kmForz,  4);
	aerodebForz=CalculadorDeCostos(aeroForz, kmForz, 1);
	aerocredForz= CalculadorDeCostos(aeroForz, kmForz,  2);
	aerobitForz= CalculadorDeCostos(aeroForz, kmForz,  3);
	precioXKMaeroForz= CalculadorDeCostos(aeroForz, kmForz,  4);
	difAeLatForz = CalculadorDeCostos(latamForz, aeroForz, 5);

	printf("--------------------------------------------"
			"\nKMs Ingresados: %d\n"
			"\n Latam: "
			"\n a) Precio con tarjeta de débito: %d"
			"\n b) Precio con tarjeta de crédito: %d"
			"\n c) Precio pagando con bitcoin : %.2f"
			"\n d) Precio unitario: %d\n"
			"\n Aerolíneas:"
			"\n a) Precio con tarjeta de débito: %d"
			"\n b) Precio con tarjeta de crédito: %d"
			"\n c) Precio pagando con bitcoin : %.2f"
			"\n d) Precio unitario: %d\n"
			"\n La diferencia de precio es : %d\n\n"
			"--------------------------------------------\n\n",kmForz, latamdebForz,latamcredForz,latambitForz,precioXKMlatamForz,aerodebForz,aerocredForz,aerobitForz,precioXKMaeroForz,difAeLatForz);

}

