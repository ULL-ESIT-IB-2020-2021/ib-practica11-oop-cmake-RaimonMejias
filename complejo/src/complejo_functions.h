/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Asignatura: Informática Básica
* Curso: 1º
* @file complejo_functions.h
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
#ifndef COMPLEJO_FUNCTIONS_H
#define COMPLEJO_FUNCTIONS_H
/**
 * se declara la clase complejo, la cual permite operar con numeros complejos
 */ 
class Complex {     
 public:
   ///se declara una forma predeterminada
   Complex() = default;
   /// se declra la forma correcta de un numero complejo
   Complex(double real, double imaginary) : real_(real), imaginary_(imaginary) {}
   double real() const { return real_; }
   double imaginary() const { return imaginary_; }
   /**
    * Esta funcion permite imprimir por pantalla un numero complejo
    */ 
   void print(){
     std::cout << real_ << "+" << imaginary_ << "i" << std::endl;
   }
 private:
   double real_{};       
   double imaginary_{};       
};

/// se declaran las funciones antes de su uso 
Complex Add( Complex& number1,  Complex& number2);
Complex Sub( Complex& number1,  Complex& number2);
#endif
