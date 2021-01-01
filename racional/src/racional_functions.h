/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Asignatura: Informática Básica
* Curso: 1º
* @file racional_functions.h
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
#ifndef RACIONAL_FUNCTIONS_H
#define RACIONAL_FUNCTIONS_H

/**
 * Se declara la clase Racional, la cual permitira el funcionamiento del programa
 * 
 */ 
class Racional{
public:
  /// se declara por defecto
  Racional() = default;
  /// se declara su forma correcta 
  Racional(int numerator, int denominator):
         numerator_(numerator), denominator_(denominator){}
  int numerator() const { return numerator_; }
  int denominator() const { return denominator_; }
private:
  /// las variables privadas
  int numerator_;
  int denominator_;
};

//declaracion de las funciones generales

void SecondComprobator(std::string file1, std::string file2);
void FirstComprobator(int parameters);
void Helpinformation();
void Output(Racional &number1, Racional &number2, std::string file);

// declaracion de las funciones de la clase Racional

std::ostream& operator<<(std::ostream &out, const Racional &racional);
Racional operator+(Racional &number1, Racional &number2);
Racional operator-(Racional &number1, Racional &number2);
Racional operator*(Racional &number1, Racional &number2);
Racional operator/(Racional &number1, Racional &number2);
bool operator<(Racional &number1, Racional &number2);
bool operator>(Racional &number1, Racional &number2);
bool operator==(Racional &number1, Racional &number2);

#endif