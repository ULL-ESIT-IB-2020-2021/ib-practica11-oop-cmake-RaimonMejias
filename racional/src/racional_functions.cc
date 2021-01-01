/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Asignatura: Informática Básica
* Curso: 1º
* @file racional_functions.cc
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
#include <numeric>
#include "racional_functions.h"
/**
 * Esta funcion permite imprimir por pantalla el formato "A/B"
 * @param Un numero racional de clase Racional
 * @return se devuelve una cadena de caracteres mostrando el numero "A/B"
 */ 
std::ostream& operator<<(std::ostream &out, const Racional &racional){
  /// se comprueba si el racional es posible 
  if(racional.denominator() == 0){
    std::cerr << "Un numero racional no puede tener como denominador 0";
    exit(1);
  }
   if(racional.denominator() < 0){
    out << racional.numerator()*-1 << "/" << racional.denominator()*-1;
    return out;
  }
  out << racional.numerator() << "/" << racional.denominator();
  return out; 
}
/**
 * Esta funcion permite sumar dos numeros racionales
 * @param Dos numeros de clase Racional 
 * @return la suma de dichos numeros racionales 
 */ 
Racional operator+(Racional &number1, Racional &number2){
   /// se comprueba si los racionales son correctos 
   if(number1.denominator() == 0 || number2.denominator() == 0){
    std::cerr << "Un numero racional no puede tener como denominador 0";
    exit(1);
  }
  /// se determina la forma de sumar los racionales
  /// Si tienen igual denominador
  if (number1.denominator() == number2.denominator()){
    return Racional(number1.numerator()+number2.numerator(),number1.denominator());
  }
  /// si tienen distinto denominador
  int lcm =std::lcm(number1.denominator(),number2.denominator());

  int numerator1 = (lcm*number1.numerator())/number1.denominator();

  int numerator2 = (lcm*number2.numerator())/number2.denominator();

  return Racional(numerator1+numerator2,lcm);
}
/**
 * Esta funcion permite restar dos numeros racionales
 * @param Dos numeros de clase Racional 
 * @return la diferencia de dichos numeros racionales 
 */ 
Racional operator-(Racional &number1, Racional &number2){
   /// se comprueba si los racionales son correctos
   if(number1.denominator() == 0 || number2.denominator() == 0){
    std::cerr << "Un numero racional no puede tener como denominador 0";
    exit(1);
  }
  /// se determina la forma de sumar los racionales
  /// Si tienen igual denominador
  if (number1.denominator() == number2.denominator()){
    return Racional(number1.numerator()+number2.numerator(),number1.denominator());
  }
  /// si tienen distinto denominador
  int lcm =std::lcm(number1.denominator(),number2.denominator());

  int numerator1 = (lcm*number1.numerator())/number1.denominator();

  int numerator2 = (lcm*number2.numerator())/number2.denominator();

  return Racional(numerator1-numerator2,lcm);
}
/**
 * Esta funcion permite multiplicar dos numeros racionales
 * @param Dos numeros de clase Racional 
 * @return el producto de dichos numeros racionales 
 */ 
Racional operator*(Racional &number1, Racional &number2){
  /// se comprueba si los racionales son correctos 
  if(number1.denominator() == 0 || number2.denominator() == 0){
    std::cerr << "Un numero racional no puede tener como denominador 0";
    exit(1);
  }
  return Racional(number1.numerator()*number2.numerator(),number1.denominator()*number2.denominator());
}
/**
 * Esta funcion permite dividir dos numeros racionales
 * @param Dos numeros de clase Racional 
 * @return la division de dichos numeros racionales 
 */ 
Racional operator/(Racional &number1, Racional &number2){
  /// se comprueba que los racionales son correctos  
  if(number1.denominator() == 0 || number2.denominator() == 0){
    std::cerr << "Un numero racional no puede tener como denominador 0";
    exit(1);
  }
  return Racional(number1.numerator()*number2.denominator(),number1.denominator()*number2.numerator());
}
/**
 * Esta funcion permite comparar dos numeros racionales
 * @param Dos numeros de clase Racional 
 * @return verdadero,si el racional 1 es mayor al racional 2 
 */ 
bool operator<(Racional &number1, Racional &number2){
  double real1 = number1.numerator()/number1.denominator();
  double real2 = number2.numerator()/number2.denominator();
  if(real1 < real2){
    return true;
  }
  return false;
}
/**
 * Esta funcion permite comparar dos numeros racionales
 * @param Dos numeros de clase Racional 
 * @return verdadero,si el racional 1 es menor al racional 2 
 */ 
bool operator>(Racional &number1, Racional &number2){
  
  double real1 = number1.numerator()/number1.denominator();
  double real2 = number2.numerator()/number2.denominator();
  if(real1 > real2){
    return true;
  }
  return false;
}
/**
 * Esta funcion permite comparar dos numeros racionales
 * @param Dos numeros de clase Racional 
 * @return verdadero,si el racional 1 es igual al racional 2 
 */ 
bool operator==(Racional &number1, Racional &number2){
  double real1 = number1.numerator()/number1.denominator();
  double real2 = number2.numerator()/number2.denominator();
  if(real1 == real2){
    return true;
  }
  return false;
}
/**
 * Esta funcion llama a los distintos operadores y los imprime en un fichero de salida
 * @param Dos numeros de clase Racional 
 * @return los resultados de cada una de las operaciones, en un fichero de salida 
 */ 
void Output(Racional &number1, Racional &number2, std::string file){
  std::ofstream outputfile{file, std::ios_base::app};
  outputfile << number1 << " + " << number2 << " = " << number1 + number2 << std::endl;
  outputfile << number1 << " - " << number2 << " = " << number1 - number2 << std::endl;
  outputfile << number1 << " * " << number2 << " = " << number1 * number2 << std::endl;
  outputfile << number1 << " / " << number2 << " = " << number1 / number2 << std::endl;
  outputfile << number1 << " < " << number2 << " = " << (number1 < number2) << std::endl;
  outputfile << number1 << " > " << number2 << " = " << (number1 > number2) << std::endl;
  outputfile << number1 << " == " << number2 << " = " << (number1 == number2) << std::endl;
}
/**
 * Esta funcion comprueba si se han introducido el numero correcto de parametros 
 * @param numero de parametros  
 * @return 
 */ 
void FirstComprobator(int parameters){

  if(parameters < 3){
    std::cerr << "Falta/n archivos" << std::endl;
    std::cerr << "Metodo de uso: ./racionales <inputfile.txt> <outputfile.txt>" << std::endl;
    std::cerr << "Para mas informacion escriba <--help 0> en la linea de comandos" << std::endl;
    std::cerr << std::endl; 
    exit(1);
  }
}
/**
 * Esta funcion comprueba si los ficheros se pueden abrir 
 * @param cadenas de caracteres 
 * @return  
 */ 
void SecondComprobator(std::string file1, std::string file2){
  if(file1 == "--help"){
    Helpinformation();
  }
   std::ifstream inputfile{file1};
   std::ofstream outputfile{file2};

  if (!inputfile){
    std::cerr << "No existe o no se pudo abrir < inputfile.txt >" << std::endl;
    std::cerr << "Para mas informacion escriba --help en la linea de comandos" << std::endl;
    exit(1);
  }
  if (!outputfile){
    std::cerr << "No existe o no se pudo abrir < outputfile.txt >" << std::endl;
    std::cerr << "Para mas informacion escriba --help en la linea de comandos" << std::endl;
    exit(1);
  }
}
/**
 * Esta funcion comprueba si se ha introducido "--help" por la linea de comandos 
 * @param una cadena de caracteres 
 * @return informacion sobre el programa 
 */ 
void Helpinformation(){

  std::cout << "Este programa utiliza dos ficheros uno de entrada y otro de salida, los cuales se llamaran de manera predeterminada inputfile.txt y outputfile.txt" << std::endl;
  std::cout << std::endl;
  std::cout << "Metodo de uso: ./racionales <inputfile.txt> <outputfile.txt>" << std::endl;
  std::cout << std::endl;
  std::cout << "inputfile.txt: en este fichero se pondra los numeros racionales, separados por un espacio, con lo que se han de hacer las operaciones" << std::endl;
  std::cout << std::endl;
  std::cout << "outputfile.txt: en este fichero saldran los resultados de las operaciones hechas con los numeros de inputfile.txt" << std::endl;
  std::cout << std::endl;
  std::cout << "Los numeros racionales han de escribirse de la siguiente manera: 'a/b'";
  exit(1); 
}