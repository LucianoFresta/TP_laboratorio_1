/*
 * bib_validadores.h
 *
 *  Created on: 12 abr. 2022
 *      Author: luciano
 */

#ifndef BIB_VALIDADORES_H_
#define BIB_VALIDADORES_H_


/// @fn float ValidadorPositivo(float)
/// @brief Primer validador, el cual verifica que los numers ingresados no sean menores a 0 para que no haya una carga incoherente de datos.
///
/// @param num
/// @return
float ValidadorPositivo(float num);

/// @fn int ValidadorOpcioneSubmenu(int)
/// @brief validador especifico para el submenu, este se encarga de que se elijan las opciones correctas solamente.
///
/// @param num
/// @return retorna el valor elegido por parametro dentro del submenu para la carga de costo latam/aero
int ValidadorOpcioneSubmenu(int num);



#endif /* BIB_VALIDADORES_H_ */
