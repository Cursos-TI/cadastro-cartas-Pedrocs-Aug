#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado, //Uma letra de 'A' a 'H' (representando um dos oito estados).
      CodigodaCarta, //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
      NomedaCidade[30]; // O nome da cidade

  int População, // O número de habitantes da cidade.
    NumerodePontosTuristicos; // A quantidade de pontos turísticos na cidade.

  float Areaemkm, // A área da cidade em quilômetros quadrados.
    PIB; //O Produto Interno Bruto da cidade

  // Área para entrada de dados

  printf ("Insira o Estado: \n");
  scanf ( "%c", &Estado);
  printf ("Insira o Código: \n");
  scanf ( "%c", &CodigodaCarta);
  printf ("Insira o Nome da Cidade: \n");
  scanf ("%c", NomedaCidade);




  // Área para exibição dos dados da cidade

return 0;
} 
