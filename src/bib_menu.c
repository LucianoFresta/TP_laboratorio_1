/*
 * tp1_biblio.c
 *
 *  Created on: 4 abr. 2022
 *      Author: LUCIANO FRESTA
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "bib_menu.h"
#include "bib_validadores.h"
#include "bib_calculadores.h"


void MenuInteractivo(void) {
	int flagKM=0;
	int flagPrecioLatam=0;
	int flagPrecioAero=0;
	int respuesta;
	float km=0;
	double latamPrecio=0;
	double aeroPrecio=0;
	int latamoaero;
	float latamdeb=0;
	float latamcred=0;
	float latambit=0;
	float precioXKMlatam=0;
	float precioXKMaero=0;
	float difAeLat=0;
	float aerodeb=0;
	float aerocred=0;
	float aerobit=0;
	int banderaCalculo=0;

	printf("Bienvenido!\n\n");

	do{
		if(flagKM == 0 && flagPrecioAero == 0 && flagPrecioLatam == 0){
			printf( "1. Ingresar Kilómetros: %.2f.\n"
					"2. Ingresar Precio de Vuelos.\n"
					"	- Precio vuelo Aerolíneas: $%.2lf.\n"
					"	- Precio vuelo Latam: $%.2lf.\n"
					"3. Calcular todos los costos.\n"
					"4. Informar Resultados.\n"
					"5. Carga forzada de datos.\n"
					"6. Salir\n"
					" Ingrese una opcion: ",km,aeroPrecio,latamPrecio);
		}
		if(flagKM == 0 && flagPrecioAero == 0 && flagPrecioLatam == 1){
			printf( "1. Ingresar Kilómetros: %.2f.\n"
					"2. Ingresar Precio de Vuelos.\n"
					"	- Precio vuelo Aerolíneas: $%.2lf.\n"
					"	- Modificar Precio vuelo Latam: $%.2lf.\n"
					"3. Calcular todos los costos.\n"
					"4. Informar Resultados.\n"
					"5. Carga forzada de datos.\n"
					"6. Salir\n"
					" Ingrese una opcion: ",km,aeroPrecio,latamPrecio);
		}
		if(flagKM == 0 && flagPrecioAero == 1 && flagPrecioLatam == 0){
			printf( "1. Ingresar Kilómetros: %.2f.\n"
					"2. Ingresar Precio de Vuelos.\n"
					"	- Modificar Precio vuelo Aerolíneas: $%.2lf.\n"
					"	- Precio vuelo Latam: $%.2lf.\n"
					"3. Calcular todos los costos.\n"
					"4. Informar Resultados.\n"
					"5. Carga forzada de datos.\n"
					"6. Salir\n"
					" Ingrese una opcion: ",km,aeroPrecio,latamPrecio);
		}
		if(flagKM == 0 && flagPrecioAero == 1 && flagPrecioLatam == 1){
			printf( "1. Ingresar Kilómetros: %.2f.\n"
					"2. Ingresar Precio de Vuelos.\n"
					"- Modificar Precio vuelo Aerolíneas: $%.2lf.\n"
					"- Modificar Precio vuelo Latam: $%.2lf.\n"
					"3. Calcular todos los costos.\n"
					"4. Informar Resultados.\n"
					"5. Carga forzada de datos.\n"
					"6. Salir\n"
					" Ingrese una opcion: ",km,aeroPrecio,latamPrecio);
		}
		if(flagKM == 1 && flagPrecioAero == 0 && flagPrecioLatam == 0){
			printf( "1. Modificar Ingreso de Kilómetros: %.2f.\n"
					"2. Ingresar Precio de Vuelos.\n"
					"	- Precio vuelo Aerolíneas: $%.2lf.\n"
					"	- Precio vuelo Latam: $%.2lf.\n"
					"3. Calcular todos los costos.\n"
					"4. Informar Resultados.\n"
					"5. Carga forzada de datos.\n"
					"6. Salir\n"
					" Ingrese una opcion: ",km,aeroPrecio,latamPrecio);
		}
		if(flagKM == 1 && flagPrecioAero == 0 && flagPrecioLatam == 1){
			printf( "1. Modificar Ingreso de Kilómetros: %.2f.\n"
					"2. Ingresar Precio de Vuelos.\n"
					"	- Precio vuelo Aerolíneas: $%.2lf.\n"
					"	- Modificar Precio vuelo Latam: $%.2lf.\n"
					"3. Calcular todos los costos.\n"
					"4. Informar Resultados.\n"
					"5. Carga forzada de datos.\n"
					"6. Salir\n"
					" Ingrese una opcion: ",km,aeroPrecio,latamPrecio);
		}
		if(flagKM == 1 && flagPrecioAero == 1 && flagPrecioLatam == 0){
			printf( "1. Modificar Ingreso de Kilómetros: %.2f.\n"
					"2. Ingresar Precio de Vuelos.\n"
					"	- Modificar Precio vuelo Aerolíneas: $%.2lf.\n"
					"	- Precio vuelo Latam: $%.2lf.\n"
					"3. Calcular todos los costos.\n"
					"4. Informar Resultados.\n"
					"5. Carga forzada de datos.\n"
					"6. Salir\n"
					" Ingrese una opcion: ",km,aeroPrecio,latamPrecio);
		}
		if(flagKM == 1 && flagPrecioAero == 1 && flagPrecioLatam == 1){
			printf( "1. Modificar Ingreso de Kilometros: %.2f.\n"
					"2. Ingresar Precio de Vuelos.\n"
					"	- Modificar Precio vuelo Aerolineas: $%.2lf.\n"
					"	- Modificar Precio vuelo Latam: $%.2lf.\n"
					"3. Calcular todos los costos.\n"
					"4. Informar Resultados.\n"
					"5. Carga forzada de datos.\n"
					"6. Salir\n"
					" Ingrese una opcion: ",km,aeroPrecio,latamPrecio);
		}

		scanf("%d", &respuesta);
		switch(respuesta){
		case 1:
			printf("Ingrese los kilometros de su destino: ");
			scanf("%f", &km);
			km=ValidadorPositivo(km);
			flagKM = 1;
			break;
		case 2:

			printf("\nSeleecione donde desea colocar el precio: \n"
					" 	1.- Modificar Precio vuelo Aerolineas.\n"
					"	2.- Modificar Precio vuelo Latam.\n"
					"3.- Volver.\n"
					" Ingrese una opcion: ");
			scanf("%d", &latamoaero);
			latamoaero=ValidadorOpcioneSubmenu(latamoaero);
			switch(latamoaero)
			{
				case 1:

					printf("\nIngrese el precio deseado para Aerolineas: ");
					scanf("%lf", &aeroPrecio);
					aeroPrecio=ValidadorPositivo(aeroPrecio);
					flagPrecioAero = 1;
					break;

				case 2:

					printf("\nIngrese el precio deseado para Latam: ");
					scanf("%lf", &latamPrecio);
					latamPrecio=ValidadorPositivo(latamPrecio);
					flagPrecioLatam = 1;

					break;

			}
			break;
		case 3:
			if(flagKM == 1 && flagPrecioAero == 1 && flagPrecioLatam == 1){
			latamdeb = CalculadorDeCostos(latamPrecio, km, 1);
			latamcred= CalculadorDeCostos(latamPrecio, km, 2);
			latambit= CalculadorDeCostos(latamPrecio, km,  3);
			precioXKMlatam= CalculadorDeCostos(latamPrecio, km,  4);
			aerodeb=CalculadorDeCostos(aeroPrecio, km, 1);
			aerocred= CalculadorDeCostos(aeroPrecio, km,  2);
			aerobit= CalculadorDeCostos(aeroPrecio, km,  3);
			precioXKMaero= CalculadorDeCostos(aeroPrecio, km,  4);
			difAeLat = CalculadorDeCostos(latamPrecio, aeroPrecio, 5);
			banderaCalculo=1;
			printf("\n\n=================================="
					"\nLos costos ya han sido calculados!\n"
					"==================================\n\n ");
			}else{
				printf("\n\nERROR, aun es necesario cargar datos para informar los resultados. \n\n");
			}
			break;
		case 4:
			if(banderaCalculo==1){
				printf("--------------------------------------------"
						"\nKMs Ingresados: %.2f\n"
						"\n Latam:"
						"\n a) Precio con tarjeta de débito: %.2f"
						"\n b) Precio con tarjeta de crédito: %.2f"
						"\n c) Precio pagando con bitcoin : %.2f"
						"\n d) Precio unitario: %.2f\n"
						"\n Aerolíneas:"
						"\n a) Precio con tarjeta de débito: %.2f"
						"\n b) Precio con tarjeta de crédito: %.2f"
						"\n c) Precio pagando con bitcoin : %.2f"
						"\n d) Precio unitario: %.2f\n"
						"\n La diferencia de precio es : $%.2f "
						"\n-------------------------------------------- \n\n\n",km,latamdeb,latamcred,latambit,precioXKMlatam,aerodeb,aerocred,aerobit,precioXKMaero,difAeLat);
			}else{
				printf("\n\nERROR, aun es necesario realizar los calculos para informar los resultados. \n\n");
			}
			break;
		case 5:
			CargaForzadaDefault();
			break;
		case 6:
			printf("Que tenga usted un buen dia! Hasta luego!");

			break;



		}
	}while(respuesta!=6);



}












