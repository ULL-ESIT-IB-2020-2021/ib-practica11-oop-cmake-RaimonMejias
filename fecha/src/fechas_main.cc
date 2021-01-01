
/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Asignatura: Informática Básica
* Curso: 1º
* @file Fechas_main.cc
* @author Raimon Mejias <alu0101390161@ull.edu.es>
* @date 1 enero 2021
* @brief Este programa dado una fecha, un numero y un fichero de salida,
*        mostrara los n-siguientes dias de la fecha dada
*        y dira si el año es bisiesto o no
* @copyright Raimon Mejias 2021
* @version 1.0
* @bug no se han encontrado bugs 
* @see 
*/
#include <iostream>
#include <sstream>
#include "fechas_functions.h"

int main(int argc, char* argv[]){
  /// se comprueba si se han pasado los datos correctamente
  FirstComprobator(argc);
  SecondComprobator(argv[1]);

  /// se declaran e inicializan las variables que se van a usar a lo largo del programa
  std::string outputfile{argv[3]};
  int upcoming_dates = std::stoi(argv[2]);
  int day,month,year;
  std::string unused;
  std::stringstream cadena{argv[1]};
  cadena >> day >>  month  >> year;

  /// se usa la fecha dada por el usuario para inicializar la fecha
  Fechas fecha{day,month,year};
  /// se llama a la funcion que hara el trabajo buscado
  PlusDates(fecha, upcoming_dates, outputfile);

}