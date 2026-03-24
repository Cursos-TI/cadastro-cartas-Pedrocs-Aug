#include <stdio.h>

int main()
{
    // Primeira carta: Cidade 1

    // Variáveis para armazenar os dados da cidade
    char Estado1,
        CodigodaCarta1[4],
        NomedaCidade1[30];

    // Variáveis para armazenar os dados numéricos da cidade
    unsigned long int População1;
    int NumerodePontosTuristicos1;

    // Variáveis para armazenar os cálculos de densidade populacional e PIB per capita
    float Areaemkm1,
        PIB1,
        DensidadePopulacional1,
        PIBperCapita1;

    // Solicitar ao usuário que insira os dados da cidade
    printf("Insira os dados da 1° cidade: \n");
    printf("Insira o Estado: \n");
    scanf(" %c", &Estado1);
    printf("Insira o Código: \n");
    scanf("%s", CodigodaCarta1);
    printf("Insira o Nome da Cidade: \n");
    scanf("%s", NomedaCidade1);
    printf("Insira a quantidade populacional \n");
    scanf("%lu", &População1);
    printf("Insira a área da cidade em quilômetros quadrados \n");
    scanf("%f", &Areaemkm1);
    printf("Insira o Produto Interno Bruto da cidade  \n");
    scanf("%f", &PIB1);
    printf("Insira a quantidade de pontos turisticos \n");
    scanf("%i", &NumerodePontosTuristicos1);

    // Exibir os dados da cidade e os cálculos de densidade populacional e PIB per capita
    printf("\n");
    printf("Dados da Cidade: \n");

    // Cálculo da densidade populacional e PIB per capita
    DensidadePopulacional1 = População1 / Areaemkm1;
    PIBperCapita1 = PIB1 / População1;

    // Super power: Calcula com base na soma de todos os atributos numéricos da cidade
    float SuperPower1 = (float)População1 + Areaemkm1 + PIB1 + (float)NumerodePontosTuristicos1 + PIBperCapita1;

    // Exibir o Super Power da cidade
    printf("Super Power: %.2f \n", SuperPower1);

    // Exibir os dados da cidade e os cálculos
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
    char Estado2,
        CodigodaCarta2[4],
        NomedaCidade2[30];

    // Variáveis para armazenar os dados numéricos da cidade
    unsigned long int População2;
    int NumerodePontosTuristicos2;

    // Variáveis para armazenar os cálculos de densidade populacional e PIB per capita
    float Areaemkm2,
        PIB2,
        DensidadePopulacional2,
        PIBperCapita2;

    // Solicitar ao usuário que insira os dados da cidade
    printf("Insira os dados da 2° cidade: \n");
    printf("Insira o Estado: \n");
    scanf(" %c", &Estado2);
    printf("Insira o Código: \n");
    scanf("%s", CodigodaCarta2);
    printf("Insira o Nome da Cidade: \n");
    scanf("%s", NomedaCidade2);
    printf("Insira a quantidade populacional \n");
    scanf("%lu", &População2);
    printf("Insira a área da cidade em quilômetros quadrados \n");
    scanf("%f", &Areaemkm2);
    printf("Insira o Produto Interno Bruto da cidade  \n");
    scanf("%f", &PIB2);
    printf("Insira a quantidade de pontos turisticos \n");
    scanf("%i", &NumerodePontosTuristicos2);

    // Exibir os dados da cidade e os cálculos de densidade populacional e PIB per capita
    printf("\n");
    printf("Dados da Cidade: \n");

    // Cálculo da densidade populacional e PIB per capita
    DensidadePopulacional2 = População2 / Areaemkm2;
    PIBperCapita2 = PIB2 / População2;

    // Super power: Calcula com base na soma de todos os atributos numéricos da cidade
    float SuperPower2 = (float)População2 + Areaemkm2 + PIB2 + (float)NumerodePontosTuristicos2 + PIBperCapita2;

    // Exibir o Super Power da cidade
    printf("Super Power: %.2f \n", SuperPower2);

    // Exibir os dados da cidade e os cálculos
    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", CodigodaCarta2);
    printf("Nome da Cidade: %s \n", NomedaCidade2);
    printf("População: %lu \n", População2);
    printf("Área: %.2f km² \n", Areaemkm2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %i \n", NumerodePontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km² \n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais \n", PIBperCapita2);

    // Comparação de cartas com base no atributo de população

    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %lu\n", NomedaCidade1, População1);
    printf("Carta 2 - %s: %lu\n", NomedaCidade2, População2);

    if (População1 > População2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", NomedaCidade1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", NomedaCidade2);
    }
    return 0;
}
