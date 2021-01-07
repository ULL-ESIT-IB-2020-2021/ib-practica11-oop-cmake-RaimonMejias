#include <fstream>
#include <iostream>
#include <string>
#include "racional_functions.h"

int main(int argc , char* argv[]) {
  int numerator1, denominator1,numerator2,denominator2;
  char unused;
  int numerators{0},total_numerator{0};
  int denominators{0},total_denominator{0};
  int many{0};

  FirstComprobator(argc);
  SecondComprobator(argv[1],argv[2]);

  std::ifstream input{argv[1], std::ios_base::in};
  
  while(input >> numerator1 >> unused >> denominator1 >> numerator2 >> unused >> denominator2){
    numerators = numerator1 + numerator2;
    denominators = denominator1 + denominator2;
    total_numerator = total_numerator + numerators;
    total_denominator = total_denominator + denominators;
    many = ++many;
    Racional number1{numerator1,denominator1};
    Racional number2{numerator2,denominator2};
    Output(number1,number2, argv[2]);
  }
  AverageNumerator(total_numerator, many, argv[2]);
  AverageDenominator(total_denominator, many, argv[2]);

  std::cout << "Las operaciones se han calculado correctamente" << std::endl;
  std::cout << "Abra " << argv[2] << " para ver los resultados";
  std::cout << std::endl;


}