/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

//! Estructura para almacenar información de un alumno
typedef struct alumno_s {
    char apellidos[30];     //!< Apellido del alumno
    char nombres[30];       //!< Nombre del alumno
    char documento[11];     //!< Número de documento del alumno
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
 * @brief Convierte los datos de un alumno en una cadena JSON
 * 
 * @param[out]  cadena   Puntero a la cadena donde se devuelve el resultado
 * @param[in]   espacio  Cantidad de bytes disponibles en la cadena resultado
 * @param[in]   alumno   Puntero a la estructura con los datos del alumno
 * @return      true     Los datos del alumno se serializaron correctamente
 * @return      false    No se pudo serializar los datos por falta de espacio
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
 * @brief Convierte los datos de todos los alumnos en una cadena JSON
 * 
 * @param[out]  cadena   Puntero a la cadena donde se devuelve el resultado
 * @param[in]   espacio  Cantidad de bytes disponibles en la cadena resultado
 * @return      true     Los datos de todos se serializaron correctamente
 * @return      false    No se pudo serializar los datos por falta de espacio
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
