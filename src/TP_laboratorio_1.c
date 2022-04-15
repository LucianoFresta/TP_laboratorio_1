/*
 ============================================================================
 Name        : TP1.c
 Author      : LUCIANO FRESTA
 Description : TP1 PROGRAMACION/LABORATORIO

 El programa iniciar� y contar� con un men� de opciones:
	1. Ingresar Kil�metros.
	2. Ingresar Precio de Vuelos.
	3. Calcular todos los costos.
	a) Tarjeta de d�bito (descuento 10%)
	b) Tarjeta de cr�dito (inter�s 25%)
	c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
	d) Mostrar precio por km (precio unitario)
	e) Mostrar diferencia de precio ingresada (Latam - Aerol�neas)
	4. Informar Resultados
	�Latam:
	a) Precio con tarjeta de d�bito: r
	b) Precio con tarjeta de cr�dito: r
	c) Precio pagando con bitcoin : r
	d) Precio unitario: r
	Aerol�neas:
	a) Precio con tarjeta de d�bito: r
	b) Precio con tarjeta de cr�dito: r
	c) Precio pagando con bitcoin : r
	d) Precio unitario: r
	La diferencia de precio es :
	5. Carga forzada de datos
	6. Salir
 ============================================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "bib_menu.h"
#include "bib_validadores.h"
#include "bib_calculadores.h"

int main(){
	setbuf(stdout,NULL);
	MenuInteractivo();
	return 0;
}




















