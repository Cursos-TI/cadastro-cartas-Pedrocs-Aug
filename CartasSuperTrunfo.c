#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado,          // Uma letra de 'A' a 'H' (representando um dos oito estados).
        CodigodaCarta[4], // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
        NomedaCidade[30]; // O nome da cidade

    int População,                // O número de habitantes da cidade.
        NumerodePontosTuristicos; // A quantidade de pontos turísticos na cidade.

    float Areaemkm,            // A área da cidade em quilômetros quadrados.
        PIB,                   // O Produto Interno Bruto da cidade
        DensidadePopulacional, // A densidade populacional da cidade (calculada como população dividida pela área).
        PIBperCapita;          // O PIB per capita da cidade (calculado como PIB dividido pela população).

    // Área para entrada de dados

    printf("Insira o Estado: \n");
    scanf("%c", &Estado);
    printf("Insira o Código: \n");
    scanf("%s", CodigodaCarta);
    printf("Insira o Nome da Cidade: \n");
    scanf("%s", NomedaCidade);
    printf("Insira a quantidade populacional \n");
    scanf("%i", &População);
    printf("Insira a área da cidade em quilômetros quadrados \n");
    scanf("%f", &Areaemkm);
    printf("Insira o Produto Interno Bruto da cidade  \n");
    scanf("%f", &PIB);
    printf("Insira a quantidade de pontos turisticos \n");
    scanf("%i", &NumerodePontosTuristicos);

    // area para cálculo da densidade populacional e do PIB per capita
    DensidadePopulacional = População / Areaemkm;
    PIBperCapita = PIB / População;

    // Área para exibição dos dados da cidade

    printf("Estado: %c \n", Estado);
    printf("Código: %s \n", CodigodaCarta);
    printf("Nome da Cidade: %s \n", NomedaCidade);
    printf("População: %i \n", População);
    printf("Área: %2.f km² \n", Areaemkm);
    printf("PIB: %2.f bilhões de reais \n", PIB);
    printf("Número de Pontos Turísticos: %i \n", NumerodePontosTuristicos);
    printf("Densidade Populacional: %2.f habitantes/km² \n", DensidadePopulacional);
    printf("PIB per Capita: %2.f reais \n", PIBperCapita);

    return 0;
}
