/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Asignatura: Informática Básica
* Curso: 1º
* @file racional_main.cc
* @author Raimon Mejias <alu0101390161@ull.edu.es>
* @date 1 enero 2021
* @brief Este programa crea una clase Racional la cual permite operar 
*        con numeros racionales de la forma "A/B"
*        imprimiendo por fichero los resultados 
* @copyright Raimon Mejias 2021
* @version 1.0
* @bug no se han encontrado bugs 
* @see 
*/
#include <fstream>
#include <iostream>
#include <string>
#include "racional_functions.h"

int main(int argc , char* argv[]) {
  /// se declaran las variables a utilizar 
  int numerator1, denominator1,numerator2,denominator2;
  char unused;
  /// se comprueba que los parametros han sido correctamente introducidos
  FirstComprobator(argc);
  SecondComprobator(argv[1],argv[2]);
  /// se lee el fichero de entrada con los racionales a operar
  std::ifstream input{argv[1], std::ios_base::in};
  
  while(input >> numerator1 >> unused >> denominator1 >> numerator2 >> unused >> denominator2){
    Racional number1{numerator1,denominator1};
    Racional number2{numerator2,denominator2};
    /// se llama a la funcion la cual hara las operaciones. 
    Output(number1,number2, argv[2]);
  }
  /// se muestra un mensaje por pantalla para informar al usuario que ha terminado la ejecucion 
  std::cout << "Las operaciones se han calculado correctamente" << std::endl;
  std::cout << "Abra " << argv[2] << " para ver los resultados";
  std::cout << std::endl;


}