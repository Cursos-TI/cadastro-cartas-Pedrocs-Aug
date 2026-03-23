#include <stdio.h>

int main()
{
    // Variáveis para armazenar os dados da cidade
    char Estado,
        CodigodaCarta[4],
        NomedaCidade[30];
    // Variáveis para armazenar os dados numéricos da cidade
    unsigned long int População;
    int NumerodePontosTuristicos;
    // Variáveis para armazenar os cálculos de densidade populacional e PIB per capita
    float Areaemkm,
        PIB,
        DensidadePopulacional,
        PIBperCapita;
    // Solicitar ao usuário que insira os dados da cidade
    printf("Insira o Estado: \n"); 
    scanf("%c", &Estado); 
    printf("Insira o Código: \n");
    scanf("%s", CodigodaCarta);
    printf("Insira o Nome da Cidade: \n");
    scanf("%s", NomedaCidade);
    printf("Insira a quantidade populacional \n");
    scanf("%lu", &População);
    printf("Insira a área da cidade em quilômetros quadrados \n");
    scanf("%f", &Areaemkm);
    printf("Insira o Produto Interno Bruto da cidade  \n");
    scanf("%f", &PIB);
    printf("Insira a quantidade de pontos turisticos \n");
    scanf("%i", &NumerodePontosTuristicos);
    // Exibir os dados da cidade e os cálculos de densidade populacional e PIB per capita
    printf("\n");
    printf("Dados da Cidade: \n");
    // Cálculo da densidade populacional e PIB per capita
    DensidadePopulacional = População / Areaemkm;
    PIBperCapita = PIB / População;
    // Exibir os dados da cidade e os cálculos
    printf("Estado: %c \n", Estado);
    printf("Código: %s \n", CodigodaCarta);
    printf("Nome da Cidade: %s \n", NomedaCidade);
    printf("População: %lu \n", População);
    printf("Área: %2.f km² \n", Areaemkm);
    printf("PIB: %2.f bilhões de reais \n", PIB);
    printf("Número de Pontos Turísticos: %i \n", NumerodePontosTuristicos);
    printf("Densidade Populacional: %2.f habitantes/km² \n", DensidadePopulacional);
    printf("PIB per Capita: %2.f reais \n", PIBperCapita);

    return 0;
}
