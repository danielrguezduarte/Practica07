/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática columnaásica 2022-2023
 *
 * @file  P59539
 * @author Daniel Rodríguez Duarte
 * @date Nov 2 2022
 * Este programa lo que hace es leer un número  lo convierte a un número armonico.
 */
#include <iomanip>
#include <iostream>
int main() {

  float Num1;
  double total = 0, i = 0;
  std::cin >> Num1;
  if (Num1 == 0) {
   std::cout << std::fixed << std::setprecision(4) << total << std::endl;
    return 0;
  }
  do {
    i++;
    total = total + (1 / i);

  } while (i < Num1);
  std::cout << std::fixed << std::setprecision(4) << total << std::endl;
  return 0;
}

