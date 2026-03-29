#include <stdio.h>
#include <string.h>

int main()
{
    // Primeira carta: Cidade 1

    // Variáveis para armazenar os dados da cidade
    char Estado1 = 'S',
         CodigodaCarta1[4] = "S01",
         NomedaCidade1[30] = "São_Paulo";

    // Variáveis para armazenar os dados numéricos da cidade
    unsigned long int População1 = 11451245;
    int NumerodePontosTuristicos1 = 100;

    float Areaemkm1 = 1521.11,
          PIB1 = 150000.00,
          // Variáveis para armazenar os cálculos de densidade populacional e PIB per capita
        DensidadePopulacional1,
          PIBperCapita1;

    // Cálculo da densidade populacional e PIB per capita
    DensidadePopulacional1 = (float)População1 / Areaemkm1;
    PIBperCapita1 = PIB1 / (float)População1;

    // Super power: Calcula com base na soma de todos os atributos numéricos da cidade
    float SuperPower1 = (float)População1 + Areaemkm1 + PIB1 + (float)NumerodePontosTuristicos1 + PIBperCapita1;

    // Exibir o Super Power da cidade
    printf("Super Power: %.2f \n", SuperPower1);

    // Exibir os dados da cidade 1 e os cálculos
    printf("Estado: %c \n", Estado1);
    printf("Código: %s \n", CodigodaCarta1);
    printf("Nome da Cidade: %s \n", NomedaCidade1);
    printf("População: %lu \n", População1);
    printf("Área: %.2f km² \n", Areaemkm1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %i \n", NumerodePontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km² \n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais \n", PIBperCapita1);

    // Segunda carta: Cidade 2

    // Variáveis para armazenar os dados da cidade
    char Estado2 = 'P',
         CodigodaCarta2[4] = "P02",
         NomedaCidade2[30] = "Curitiba";

    // Variáveis para armazenar os dados numéricos da cidade
    unsigned long int População2 = 1773718;
    int NumerodePontosTuristicos2 = 30;

    float Areaemkm2 = 434.89,
          PIB2 = 98000000.00,
          // Variáveis para armazenar os cálculos de densidade populacional e PIB per capita
        DensidadePopulacional2,
          PIBperCapita2;

    // Cálculo da densidade populacional e PIB per capita
    DensidadePopulacional2 = (float)População2 / Areaemkm2;
    PIBperCapita2 = PIB2 / (float)População2;

    // Super power: Calcula com base na soma de todos os atributos numéricos da cidade
    float SuperPower2 = (float)População2 + Areaemkm2 + PIB2 + (float)NumerodePontosTuristicos2 + PIBperCapita2;

    // Exibir o Super Power da cidade
    printf("Super Power: %.2f \n", SuperPower2);

    // Exibir os dados da cidade 2 e os cálculos
    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", CodigodaCarta2);
    printf("Nome da Cidade: %s \n", NomedaCidade2);
    printf("População: %lu \n", População2);
    printf("Área: %.2f km² \n", Areaemkm2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %i \n", NumerodePontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km² \n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais \n", PIBperCapita2);

    // Comparação entre as cidades com base em um atributo escolhido pelo usuário
    int comparacao1, comparacao2,
        vencedor1 = 0, vencedor2 = 0;

    float atributovencedor1, atributovencedor2,
        atributoperdedor1, atributoperdedor2,
        somaatributoperdedor,
        somaatributovencedor;

    char AtributoEscolhido1[30], AtributoEscolhido2[30],
        cidadevencedora[30], cidadeperdedora[30];

    printf("### Primeira Comparação entre as cidades ### \n");
    printf("Escolha o primeiro atributo para comparar as cidades: \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Número de Pontos Turísticos \n");
    printf("5 - Densidade Populacional \n");
    printf("6 - PIB per Capita \n");
    printf("7 - Super Power \n");
    scanf("%i", &comparacao1);

    printf("### Segunda Comparação entre as cidades ### \n");
    printf("Escolha o segundo atributo para comparar as cidades: \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Número de Pontos Turísticos \n");
    printf("5 - Densidade Populacional \n");
    printf("6 - PIB per Capita \n");
    printf("7 - Super Power \n");
    scanf("%i", &comparacao2);

    // Comparação do primeiro atributo escolhido
    switch (comparacao1)
    case 1:
        if (População1 > População2)
        {
            vencedor1++;
            atributovencedor1 = (float)População1;
            atributoperdedor1 = (float)População2;
            strcpy(cidadevencedora, NomedaCidade1);
            strcpy(cidadeperdedora, NomedaCidade2);
        }
        else if (População2 > População1)
        {
            vencedor2++;
            atributovencedor1 = (float)População2;
            atributoperdedor1 = (float)População1;
            strcpy(cidadevencedora, NomedaCidade2);
            strcpy(cidadeperdedora, NomedaCidade1);
        }
        else
        {
            printf("Empate na comparação de população! \n");
        }
        break;