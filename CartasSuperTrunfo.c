#include <stdio.h>

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
    int comparacao;

    printf("### Comparação entre as cidades ### \n");
    printf("Escolha o aributo para compara as cidades: \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Número de Pontos Turísticos \n");
    printf("5 - Densidade Populacional \n");
    printf("6 - PIB per Capita \n");
    printf("7 - Super Power \n");
    scanf("%i", &comparacao);

    switch (comparacao)
    {
    case 1:
        if (População1 > População2)
        {
            printf("Cidade 1 %s venceu a comparação de população, com %lu habitantes. \n", NomedaCidade1, População1);
        }
        else if (População2 > População1)
        {
            printf("Cidade 2 %s venceu a comparação de população, com %lu habitantes. \n", NomedaCidade2, População2);
        }
        else
        {
            printf("As cidades %s e %s empataram, por terem a mesma população com %lu habitantes. \n", NomedaCidade1, NomedaCidade2, População1);
        }
        break;
    case 2:
        if (Areaemkm1 > Areaemkm2)
        {
            printf("Cidade 1 %s venceu a comparação de área, com %.2f km². \n", NomedaCidade1, Areaemkm1);
        }
        else if (Areaemkm2 > Areaemkm1)
        {
            printf("Cidade 2 %s venceu a comparação de área, com %.2f km². \n", NomedaCidade2, Areaemkm2);
        }
        else
        {
            printf("As cidades %s e %s empataram, por terem a mesma área com %.2f km². \n", NomedaCidade1, NomedaCidade2, Areaemkm1);
        }
        break;
    case 3:
        if (PIB1 > PIB2)
        {
            printf("Cidade 1 %s venceu a comparação de PIB, com %.2f bilhões de reais. \n", NomedaCidade1, PIB1);
        }
        else if (PIB2 > PIB1)
        {
            printf("Cidade 2 %s venceu a comparação de PIB, com %.2f bilhões de reais. \n", NomedaCidade2, PIB2);
        }
        else
        {
            printf("As cidades %s e %s empataram, por terem o mesmo PIB com %.2f bilhões de reais. \n", NomedaCidade1, NomedaCidade2, PIB1);
        }
        break;
    case 4:
        if (NumerodePontosTuristicos1 > NumerodePontosTuristicos2)
        {
            printf("Cidade 1 %s venceu a comparação de pontos turísticos, com %i pontos. \n", NomedaCidade1, NumerodePontosTuristicos1);
        }
        else if (NumerodePontosTuristicos2 > NumerodePontosTuristicos1)
        {
            printf("Cidade 2 %s venceu a comparação de pontos turísticos, com %i pontos. \n", NomedaCidade2, NumerodePontosTuristicos2);
        }
        else
        {
            printf("As cidades %s e %s empataram, por terem o mesmo número de pontos turísticos com %i pontos. \n", NomedaCidade1, NomedaCidade2, NumerodePontosTuristicos1);
        }
        break;
    case 5:
        if (DensidadePopulacional1 < DensidadePopulacional2)
        {
            printf("Cidade 1 %s venceu a comparação de densidade populacional, com %.2f habitantes/km². \n", NomedaCidade1, DensidadePopulacional1);
        }
        else if (DensidadePopulacional2 < DensidadePopulacional1)
        {
            printf("Cidade 2 %s venceu a comparação de densidade populacional, com %.2f habitantes/km². \n", NomedaCidade2, DensidadePopulacional2);
        }
        else
        {
            printf("As cidades %s e %s empataram, por terem a mesma densidade populacional com %.2f habitantes/km². \n", NomedaCidade1, NomedaCidade2, DensidadePopulacional1);
        }
        break;
    case 6:
        if (PIBperCapita1 > PIBperCapita2)
        {
            printf("Cidade 1 %s venceu a comparação de PIB per capita, com %.2f reais. \n", NomedaCidade1, PIBperCapita1);
        }
        else if (PIBperCapita2 > PIBperCapita1)
        {
            printf("Cidade 2 %s venceu a comparação de PIB per capita, com %.2f reais. \n", NomedaCidade2, PIBperCapita2);
        }
        else
        {
            printf("As cidades %s e %s empataram, por terem o mesmo PIB per capita com %.2f reais. \n", NomedaCidade1, NomedaCidade2, PIBperCapita1);
        }
        break;
    case 7:
        if (SuperPower1 > SuperPower2)
        {
            printf("Cidade 1 %s venceu a comparação de Super Power, com %.2f pontos. \n", NomedaCidade1, SuperPower1);
        }
        else if (SuperPower2 > SuperPower1)
        {
            printf("Cidade 2 %s venceu a comparação de Super Power, com %.2f pontos. \n", NomedaCidade2, SuperPower2);
        }
        else
        {
            printf("As cidades %s e %s empataram, por terem o mesmo Super Power com %.2f pontos. \n", NomedaCidade1, NomedaCidade2, SuperPower1);
        }
        break;
    default:
        printf("Opção inválida. Por favor, escolha um número entre 1 e 7. \n");
        break;
    }

    return 0;
}
