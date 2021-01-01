/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Asignatura: Informática Básica
* Curso: 1º
* @file Fechas_functions.h
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

#ifndef FECHAS_FUNCTIONS_H
#define FECHAS_FUNCTIONS_H

/**
 * Se declara la clase Fechas, la cual permitira el correcto funcionamiento del programa 
 */ 
class Fechas{
public:
/// En caso de que no se pase ningun parametro para la tipo Fechas  
/// este usara los parametros predeterminados: "01/01/2000"
Fechas(): day_(01),month_(01),year_(2000){}
/// se declara la forma correcta de  inicializar el tipo dia/mes/año
Fechas(int day,int month, int year): 
      day_(day), month_(month), year_(year){}
int day() const {return day_;}
int month() const {return month_;}
int year() const {return year_;}
/// debido a la constante utilizacion de la funcion operator<< se le permite usar las variables privadas
friend std::ostream& operator<<(std::ostream &out, const Fechas &fecha);
private:
/// se declaran las variables privadas
int day_;
int month_;
int year_;
};

/// se declaran las funciones previo a su utilizacion
std::ostream& operator<<(std::ostream &out, const Fechas &fecha);
std::string LeapYear(const Fechas &fecha);
void PlusDates(const Fechas &fecha, int upcoming_dates, std::string file);
Fechas operator+(const Fechas &fecha, int number);
void FirstComprobator(int parameters);
void SecondComprobator(std::string);

#endif