#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() // Função principal do programa, onde a execução começa
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

    printf("Insira o Estado: \n"); // Solicita ao usuário que insira o estado representado por uma letra de 'A' a 'H'
    scanf("%c", &Estado); // Lê a letra do estado e armazena na variável Estado
    printf("Insira o Código: \n");// Solicita ao usuário que insira o código da carta, que deve ser a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    scanf("%s", CodigodaCarta); // Lê o código da carta e armazena na variável CodigodaCarta
    printf("Insira o Nome da Cidade: \n"); // Solicita ao usuário que insira o nome da cidade
    scanf("%s", NomedaCidade); // Lê o nome da cidade e armazena na variável NomedaCidade
    printf("Insira a quantidade populacional \n"); // Solicita ao usuário que insira a quantidade populacional da cidade
    scanf("%i", &População); // Lê a quantidade populacional e armazena na variável População
    printf("Insira a área da cidade em quilômetros quadrados \n"); // Solicita ao usuário que insira a área da cidade em quilômetros quadrados
    scanf("%f", &Areaemkm); // Lê a área da cidade e armazena na variável Areaemkm
    printf("Insira o Produto Interno Bruto da cidade  \n"); // Solicita ao usuário que insira o Produto Interno Bruto da cidade
    scanf("%f", &PIB); // Lê o Produto Interno Bruto da cidade e armazena na variável PIB
    printf("Insira a quantidade de pontos turisticos \n"); // Solicita ao usuário que insira a quantidade de pontos turísticos da cidade
    scanf("%i", &NumerodePontosTuristicos); // Lê a quantidade de pontos turísticos e armazena na variável NumerodePontosTuristicos

    printf("\n"); // Quebra de linha para melhor formatação da saída
    printf("Dados da Cidade: \n"); // Título para os dados da cidade

    // area para cálculo da densidade populacional e do PIB per capita
    DensidadePopulacional = População / Areaemkm; // Calcula a densidade populacional dividindo a população pela área da cidade
    PIBperCapita = PIB / População; // Calcula o PIB per capita dividindo o Produto Interno Bruto da cidade pela população da cidade

    // Área para exibição dos dados da cidade

    printf("Estado: %c \n", Estado); // Exibe o estado da cidade
    printf("Código: %s \n", CodigodaCarta); // Exibe o código da carta, que é a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    printf("Nome da Cidade: %s \n", NomedaCidade); // Exibe o nome da cidade
    printf("População: %i \n", População); // Exibe a quantidade populacional da cidade
    printf("Área: %2.f km² \n", Areaemkm); // Exibe a área da cidade em quilômetros quadrados
    printf("PIB: %2.f bilhões de reais \n", PIB); // Exibe o Produto Interno Bruto da cidade em bilhões de reais
    printf("Número de Pontos Turísticos: %i \n", NumerodePontosTuristicos); // Exibe a quantidade de pontos turísticos da cidade
    printf("Densidade Populacional: %2.f habitantes/km² \n", DensidadePopulacional); // Exibe a densidade populacional da cidade em habitantes por quilômetro quadrado
    printf("PIB per Capita: %2.f reais \n", PIBperCapita); // Exibe o PIB per capita da cidade em reais

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
