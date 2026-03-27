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

    float valorsoma1, valorsoma2,
        valortotal;

    char AtributoEscolhido1[30], AtributoEscolhido2[30];

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

    if (comparacao1 == comparacao2)
    {
        printf("A opção segunda opção escolhida é igual a primeira, por favor escolha uma opção diferente.\n");
    }
    else
    {
        switch (comparacao1)
        {
        case 1:
            vencedor1 = População1 > População2 ? 1 : 2;
            valorsoma1 = População1 > População2 ? População1 : População2;
            strcpy(AtributoEscolhido1, "População");
            break;
        case 2:
            vencedor1 = Areaemkm1 > Areaemkm2 ? 1 : 2;
            valorsoma1 = Areaemkm1 > Areaemkm2 ? Areaemkm1 : Areaemkm2;
            strcpy(AtributoEscolhido1, "Área");
            break;
        case 3:
            vencedor1 = PIB1 > PIB2 ? 1 : 2;
            valorsoma1 = PIB1 > PIB2 ? PIB1 : PIB2;
            strcpy(AtributoEscolhido1, "PIB");
            break;
        case 4:
            vencedor1 = NumerodePontosTuristicos1 > NumerodePontosTuristicos2 ? 1 : 2;
            valorsoma1 = NumerodePontosTuristicos1 > NumerodePontosTuristicos2 ? NumerodePontosTuristicos1 : NumerodePontosTuristicos2;
            strcpy(AtributoEscolhido1, "Número de Pontos Turísticos");
            break;
        case 5:
            vencedor1 = DensidadePopulacional1 > DensidadePopulacional2 ? 1 : 2;
            valorsoma1 = DensidadePopulacional1 > DensidadePopulacional2 ? DensidadePopulacional1 : DensidadePopulacional2;
            strcpy(AtributoEscolhido1, "Densidade Populacional");
            break;
        case 6:
            vencedor1 = PIBperCapita1 > PIBperCapita2 ? 1 : 2;
            valorsoma1 = PIBperCapita1 > PIBperCapita2 ? PIBperCapita1 : PIBperCapita2;
            strcpy(AtributoEscolhido1, "PIB per Capita");

            break;
        case 7:
            vencedor1 = SuperPower1 > SuperPower2 ? 1 : 2;
            valorsoma1 = SuperPower1 > SuperPower2 ? SuperPower1 : SuperPower2;
            strcpy(AtributoEscolhido1, "Super Power");
            break;
        default:
            printf("Opção inválida. Por favor, escolha um número entre 1 e 7. \n");
            break;
        }

        switch (comparacao2)
        {
        case 1:
            vencedor2 = População1 > População2 ? 1 : 2;
            valorsoma2 = População1 > População2 ? População1 : População2;
            strcpy(AtributoEscolhido2, "População");
            break;
        case 2:
            vencedor2 = Areaemkm1 > Areaemkm2 ? 1 : 2;
            valorsoma2 = Areaemkm1 > Areaemkm2 ? Areaemkm1 : Areaemkm2;
            strcpy(AtributoEscolhido2, "Área (km²)");
            break;
        case 3:
            vencedor2 = PIB1 > PIB2 ? 1 : 2;
            valorsoma2 = PIB1 > PIB2 ? PIB1 : PIB2;
            strcpy(AtributoEscolhido2, "PIB");
            break;
        case 4:
            vencedor2 = NumerodePontosTuristicos1 > NumerodePontosTuristicos2 ? 1 : 2;
            valorsoma2 = NumerodePontosTuristicos1 > NumerodePontosTuristicos2 ? NumerodePontosTuristicos1 : NumerodePontosTuristicos2;
            strcpy(AtributoEscolhido2, "Número de Pontos Turísticos");
            break;
        case 5:
            vencedor2 = DensidadePopulacional1 > DensidadePopulacional2 ? 1 : 2;
            valorsoma2 = DensidadePopulacional1 > DensidadePopulacional2 ? DensidadePopulacional1 : DensidadePopulacional2;
            strcpy(AtributoEscolhido2, "Densidade Populacional");
            break;
        case 6:
            vencedor2 = PIBperCapita1 > PIBperCapita2 ? 1 : 2;
            valorsoma2 = PIBperCapita1 > PIBperCapita2 ? PIBperCapita1 : PIBperCapita2;
            strcpy(AtributoEscolhido2, "PIB per Capita");
            break;
        case 7:
            vencedor2 = SuperPower1 > SuperPower2 ? 1 : 2;
            valorsoma2 = SuperPower1 > SuperPower2 ? SuperPower1 : SuperPower2;
            strcpy(AtributoEscolhido2, "Super Power");
            break;
        default:
            printf("Opção inválida. Por favor, escolha um número entre 1 e 7. \n");
            break;
        }

        
        printf ("### Resultado da Comparação ### \n");
        printf("Cidade 1: %s | Cidade 2: %s \n", NomedaCidade1, NomedaCidade2);
        printf("Atributo 1: %s | Valor: %.2f \n", AtributoEscolhido1, valorsoma1);
        printf("Atributo 2: %s | Valor: %.2f \n", AtributoEscolhido2, valorsoma2);
    }

    return 0;
}