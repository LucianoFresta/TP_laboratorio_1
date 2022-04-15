/*
 * bib_calculadores.h
 *
 *  Created on: 12 abr. 2022
 *      Author: luciano
 */

#ifndef BIB_CALCULADORES_H_
#define BIB_CALCULADORES_H_
/// @fn float CalculadorDeCostos(float, float, int)
/// @brief Calculador de costos, el mismo se encarga en calcularlos si estan las flags del menu principal, de todos los datos ya cargados.
///
/// @param precio
/// @param numX
/// @param tipo
/// @return
float CalculadorDeCostos( double precio, float numX, int tipo);

/// @fn void CargaForzadaDefault(void)
/// @brief Esta funcion realiza el calculo de la carga forzada con su print propio.
///
void CargaForzadaDefault (void);

#endif /* BIB_CALCULADORES_H_ */
