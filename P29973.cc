/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática columnaásica 2022-2023
 *
 * @file  P59539
 * @author Daniel Rodríguez Duarte
 * @date Nov 2 2022
 * Este programa imprime por pantalla la figura de un triangulo 
 */
#include <iostream>
int main() {
  int numero;
  std::string caracter = "*";
  std::cin >> numero;
  for (int i{0}; i < numero; i++) {
   std::cout << caracter << std::endl;
    caracter = "*" + caracter;
  }
  return 0;
}
