/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Asignatura: Informática Básica
* Curso: 1º
* @file complejo_functions.cc
* @author Raimon Mejias <alu0101390161@ull.edu.es>
* @date 1 enero 2021
* @brief Este programa crea una clase complejo la cual permite operar 
*        con numeros complejos de la forma "real + imaginaria * i"
*        imprimiendo los resultados de las funciones add y sub 
* @copyright Raimon Mejias 2021
* @version 1.0
* @bug no se han encontrado bugs 
* @see 
*/
#include <iostream>
#include "complejo_functions.h"
/**
 * Esta funcion permite sumar dos numeros complejos
 * @param Dos numeros de clase complejo 
 * @return la suma de dichos numeros complejos 
 */ 
Complex Add( Complex& number1,  Complex& number2){
 double total_real = number1.real() + number2.real();
 double total_imaginary = number1.imaginary() + number2.imaginary();
 Complex total_complex{total_real,total_imaginary};
 return total_complex;
}
/**
 * Esta funcion permite restar dos numeros complejos
 * @param Dos numeros de clase complejos 
 * @return la resta de dichos numeros complejos 
 */ 
Complex Sub( Complex& number1,  Complex& number2){
 double total_real = number1.real() - number2.real();
 double total_imaginary = number1.imaginary() - number2.imaginary();
 Complex total_complex{total_real,total_imaginary};
 return total_complex;
}




