/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Asignatura: Informática Básica
* Curso: 1º
* @file Fechas_functions.cc
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
#include <fstream>
#include "fechas_functions.h"

/**
 * Esta funcion permite imprimir por pantalla o fichero el formato predeterminado de fecha dd/mm/aa
 * @param La fecha que se quiere visualizar en formato fecha 
 * @return La fecha pedida en el formato correspondiente
 */
std::ostream& operator<<(std::ostream &out, const Fechas &fecha){
  /// comprueba si se ha pasado un dia entre 01 y 31  
  if(fecha.day_ > 31 ||fecha.day_ <= 0){
    std::cout << "coloque un dia valido" << std::endl;
    exit(1);
  }
  /// comprueba si se ha pasado un mes entre 01 y 12
  if(fecha.month_ > 12 ||fecha.month_  <= 0){
    std::cout << "Coloque un mes valido" << std::endl;
    exit(1);
  }
  /// comprueba que el año no sea negativo
  if(fecha.year_ < 0){
    std::cout << "Coloque un año valido" << std::endl;
  }
  out << fecha.day_ << "/" << fecha.month_ << "/" << fecha.year_;
  return  out;
}
/**
 * Esta funcion permite sumar en el numero de dias que se haya especificado una fecha 
 * @param La fecha inicial y el numero de dias que se le quieren sumar
 * @return La fecha correspondiente a los n-siguientes dias 
 */
Fechas operator+(const Fechas &fecha, int number){
  /// se suma la fecha y el numero  
  Fechas new_date = Fechas(fecha.day()+number, fecha.month(),fecha.year());
  /// se comprueba que la fecha cumpla las reglas establecidas
  /// en caso contrario se haran los respectivos cambios para que cumpla con las reglas
  if(new_date.day() > 31){
    if(new_date.month() != 12){
      return Fechas(new_date.day()-31, new_date.month()+1,new_date.year());
    }
    if(new_date.month() == 12){
      return Fechas(new_date.day()-31, new_date.month()-11,new_date.year()+1);
    }
  }  
  return new_date;
}

/**
 * Esta funcion permite comprobar si un año es bisiesto o no 
 * @param La fecha la cual se quiere comprobrar
 * @return una cadena de texto la cual muestra si es bisiesto o no  
 */
std::string LeapYear(const Fechas &fecha){

  std::string leap_year{};
  /// Se usa la formula para saber si un año es bisiesto 
  if(fecha.year()%4 == 0){
    if(fecha.year()%100 == 0 && fecha.year()%400 == 0 ){
      leap_year = " es bisiesto"; 
      return leap_year;
    }
    if(fecha.year()%100 != 0){
      leap_year = " es bisiesto";
      return leap_year;
    }
  }
  return leap_year = " no es bisiesto";
}

/**
 * Esta funcion llama a las funciones operator+ y LeapYear e imprime en un fichero los resulados 
 * @param Una fecha, la cantidad de dia que se le quieren sumar y el fichero de salida
 * @return La salida se pueden encontrar impresa en el fichero de salida correspondiente  
 */
void PlusDates(const Fechas &fecha, int upcoming_dates, std::string file){
  /// se crea el fichero de salida   
  std::ofstream outputfile{file, std::ios_base::app};
  /// se usa un bucle para imprimir por pantalla cada uno de los dias siguientes al indicado
  for(int i = 1; i < upcoming_dates+1; ++i){
    Fechas new_fecha;
    new_fecha = fecha+i;
     outputfile << new_fecha << " " << LeapYear(new_fecha) << std::endl; 
  }
}
/**
 * Esta funcion comprueba si se han pasado el numero correcto de parametros necesarios  
 * @param el numero de parametros introducidos
 */
void FirstComprobator(int parameters){

  if(parameters > 4 ){
    std::cerr << "Error: sobran parametros" << std::endl;
    std::cerr << "Metodo de uso: ./fechas <dd/mm/aa> <N-numero> <outputfile.txt>" << std::endl;
    std::cerr << "Para mas informacion escriba <--help> como primer parametro en la linea de comandos" << std::endl;
    std::cerr << std::endl; 
    exit(1);
  }

  if(parameters < 4){
    std::cerr << "Error: Faltan parametros" << std::endl;
    std::cerr << "Metodo de uso: ./fechas <dd/mm/aa> <N-numero> <outputfile.txt>" << std::endl;
    std::cerr << "Para mas informacion escriba <--help> como primer parametro en la linea de comandos" << std::endl;
    std::cerr << std::endl; 
    exit(1);
  }
  
}
/**
 * Esta funcion comprueba si se ha pasado por linea de comandos "--help"
 * En caso de que se haya pasado, mostrara la informacion correspondiente 
 * @param Una cadena de texto 
 */
void SecondComprobator(std::string help){
  if(help == "--help"){

    std::cout << "Este programa dado una fecha, un numero y un fichero de salida, mostrara los n-siguientes dias de la fecha dada y dira si el año es bisiesto o no" << std::endl;
    std::cout << std::endl;
    std::cout << "Metodo de uso: ./fechas <dd/mm/aa> ;;<N-numero> <outputfile.txt>" << std::endl;
    std::cout << std::endl;
    std::cout << "dd/mm/aa: se debera poner la fecha de la forma 'Dia Mes Año' con las comillas, de lo contrario el programa no funcionara" << std::endl;
    std::cout << std::endl;
    std::cout << "N-numero: Este numero sera el indicativo de cuantas fechas avanzara el programa" << std::endl;
    std::cout << std::endl;
    std::cout << "outputfile.txt: en este fichero saldran las n siguientes fechas y si el año es bisiesto o no" << std::endl;
    exit(1); 
  }
}