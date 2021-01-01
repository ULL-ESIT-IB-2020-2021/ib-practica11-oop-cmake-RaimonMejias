/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Asignatura: Informática Básica
* Curso: 1º
* @file complejo_main.cc
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
 
int main () {

 std::cout << "Este programa crea una clase complejo la cual permite operar" << std::endl;
 std::cout << "con numeros complejos de la forma 'real + imaginaria * i'" << std::endl;
 std::cout << "imprimiendo los resultados de las funciones add y sub" << std::endl;

 Complex number1{10, 20};
 Complex number2{5,13};
 std::cout <<"Dados dos numeros complejos:" << std::endl; 
 number1.print();
 number2.print();
 std::cout << "La suma y resta de dichos numeros es: " << std::endl;
 Complex resultado;
 resultado = Add(number1, number2);
 resultado.print();
 resultado = Sub(number1, number2);
 resultado.print();
 return 0;
}
