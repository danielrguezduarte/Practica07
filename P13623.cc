/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática columnaásica 2022-2023
 *
 * @file  P59539
 * @author Daniel Rodríguez Duarte
 * @date Nov 2 2022
 * Este programa lo que hace es que calcula la suma de las monedas en las casillas de un tablero de ajedrez dadas sus dimensiones y el número de monedas en cada casilla.
 */
#include <iostream>
int main() {
 int fila{0}, columna{0}, total{0};
 std::cin >> fila >> columna;
 char chess_board;
  for (int i = 0; i < fila; ++i) {
   for (int j = 0; j < columna; ++j) {
   std::cin >> chess_board;
   if ((j + i) % 2 == 0) {
    total += chess_board - '0';
    }
   }
  }
 std::cout << total << std::endl;
return 0;
}
