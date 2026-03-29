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
          PIB2 = 980000.00,
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
    int comparacao1, comparacao2;

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

    int result1, result2;

    float somavencedor1 = 0.0, somavencedor2 = 0.0;

    // Verificar se o usuário escolheu os mesmos atributos para comparação
    if (comparacao1 == comparacao2)
    {
        printf("Os atributos escolhidos para comparação são os mesmos. Por favor, escolha atributos diferentes para uma comparação válida. \n");
    }
    else
    {
        // Realizar as comparações com base no primeiro atributo escolhido
        switch (comparacao1)
        {
        case 1:
            // Comparação de população: Cidade com maior população é a vencedora
            printf("### Primeira comparacao de Populacao ###\n");
            printf("Cidade 1: %s com população de %lu habitantes \n", NomedaCidade1, População1);
            printf("Cidade 2: %s com população de %lu habitantes \n", NomedaCidade2, População2);
            if (População1 > População2)
            {
                printf("Cidade 1: %s vencedora com população de %lu habitantes \n", NomedaCidade1, População1);
            }
            else if (População2 > População1)
            {
                printf("Cidade 2: %s vencedora com população de %lu habitantes \n", NomedaCidade2, População2);
            }
            else
            {
                printf("Empate! Ambas as cidades têm a mesma população de %lu habitantes \n", População1);
            }
            somavencedor1 = somavencedor1 + População1;
            somavencedor2 = somavencedor2 + População2;
            result1 = População1 > População2 ? 1 : 2;
            break;
        case 2:
            // Comparação de área: Cidade com maior área é a vencedora
            printf("### Primeira comparacao de Area ###\n");
            printf("Cidade 1: %s com área de %.2f km² \n", NomedaCidade1, Areaemkm1);
            printf("Cidade 2: %s com área de %.2f km² \n", NomedaCidade2, Areaemkm2);
            if (Areaemkm1 > Areaemkm2)
            {
                printf("Cidade 1: %s vencedora com área de %.2f km² \n", NomedaCidade1, Areaemkm1);
            }
            else if (Areaemkm2 > Areaemkm1)
            {
                printf("Cidade 2: %s vencedora com área de %.2f km² \n", NomedaCidade2, Areaemkm2);
            }
            else
            {
                printf("Empate! Ambas as cidades têm a mesma área de %.2f km² \n", Areaemkm1);
            }
            result1 = Areaemkm1 > Areaemkm2 ? 1 : 2;
            somavencedor1 = somavencedor1 + Areaemkm1;
            somavencedor2 = somavencedor2 + Areaemkm2;
            break;
        case 3:
            // Comparação de PIB: Cidade com maior PIB é a vencedora
            printf("### Primeira comparacao de PIB ###\n");
            printf("Cidade 1: %s com PIB de %.2f bilhões de reais \n", NomedaCidade1, PIB1);
            printf("Cidade 2: %s com PIB de %.2f bilhões de reais \n", NomedaCidade2, PIB2);
            if (PIB1 > PIB2)
            {
                printf("Cidade 1: %s vencedora com PIB de %.2f bilhões de reais \n", NomedaCidade1, PIB1);
            }
            else if (PIB2 > PIB1)
            {
                printf("Cidade 2: %s vencedora com PIB de %.2f bilhões de reais \n", NomedaCidade2, PIB2);
            }
            else
            {
                printf("Empate! Ambas as cidades têm o mesmo PIB de %.2f bilhões de reais \n", PIB1);
            }
            result1 = PIB1 > PIB2 ? 1 : 2;
            somavencedor1 = somavencedor1 + PIB1;
            somavencedor2 = somavencedor2 + PIB2;
            break;
        case 4:
            // Comparação de número de pontos turísticos: Cidade com maior número de pontos turísticos é a vencedora
            printf("### Primeira comparacao de Numero de Pontos Turisticos ###\n");
            printf("Cidade 1: %s com %i pontos turísticos \n", NomedaCidade1, NumerodePontosTuristicos1);
            printf("Cidade 2: %s com %i pontos turísticos \n", NomedaCidade2, NumerodePontosTuristicos2);
            if (NumerodePontosTuristicos1 > NumerodePontosTuristicos2)
            {
                printf("Cidade 1: %s vencedora com %i pontos turísticos \n", NomedaCidade1, NumerodePontosTuristicos1);
            }
            else if (NumerodePontosTuristicos2 > NumerodePontosTuristicos1)
            {
                printf("Cidade 2: %s vencedora com %i pontos turísticos \n", NomedaCidade2, NumerodePontosTuristicos2);
            }
            else
            {
                printf("Empate! Ambas as cidades têm o mesmo número de pontos turísticos: %i \n", NumerodePontosTuristicos1);
            }
            result1 = NumerodePontosTuristicos1 > NumerodePontosTuristicos2 ? 1 : 2;
            somavencedor1 = somavencedor1 + NumerodePontosTuristicos1;
            somavencedor2 = somavencedor2 + NumerodePontosTuristicos2;

            break;
        case 5:
            // Comparação de densidade populacional: Cidade com menor densidade populacional é a vencedora
            printf("### Primeira comparacao de Densidade Populacional ###\n");
            printf("Cidade 1: %s com densidade populacional de %.2f habitantes/km² \n", NomedaCidade1, DensidadePopulacional1);
            printf("Cidade 2: %s com densidade populacional de %.2f habitantes/km² \n", NomedaCidade2, DensidadePopulacional2);
            if (DensidadePopulacional1 < DensidadePopulacional2)
            {
                printf("Cidade 1: %s vencedora com densidade populacional de %.2f habitantes/km² \n", NomedaCidade1, DensidadePopulacional1);
            }
            else if (DensidadePopulacional2 < DensidadePopulacional1)
            {
                printf("Cidade 2: %s vencedora com densidade populacional de %.2f habitantes/km² \n", NomedaCidade2, DensidadePopulacional2);
            }
            else
            {
                printf("Empate! Ambas as cidades têm a mesma densidade populacional de %.2f habitantes/km² \n", DensidadePopulacional1);
            }
            result1 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 2;
            somavencedor1 = somavencedor1 - DensidadePopulacional1;
            somavencedor2 = somavencedor2 - DensidadePopulacional2;
            break;
        case 6:
            // Comparação de PIB per Capita: Cidade com maior PIB per Capita é a vencedora
            printf("### Primeira comparacao de PIB per Capita ###\n");
            printf("Cidade 1: %s com PIB per Capita de %.2f reais \n", NomedaCidade1, PIBperCapita1);
            printf("Cidade 2: %s com PIB per Capita de %.2f reais \n", NomedaCidade2, PIBperCapita2);
            if (PIBperCapita1 > PIBperCapita2)
            {
                printf("Cidade 1: %s vencedora com PIB per Capita de %.2f reais \n", NomedaCidade1, PIBperCapita1);
            }
            else if (PIBperCapita2 > PIBperCapita1)
            {
                printf("Cidade 2: %s vencedora com PIB per Capita de %.2f reais \n", NomedaCidade2, PIBperCapita2);
            }
            else
            {
                printf("Empate! Ambas as cidades têm o mesmo PIB per Capita de %.2f reais \n", PIBperCapita1);
            }
            result1 = PIBperCapita1 > PIBperCapita2 ? 1 : 2;
            somavencedor1 = somavencedor1 + PIBperCapita1;
            somavencedor2 = somavencedor2 + PIBperCapita2;

            break;
            // Comparação de Super Power: Cidade com maior Super Power é a vencedora
        case 7:
            printf("### Primeira comparacao de Super Power ###\n");
            printf("Cidade 1: %s com Super Power de %.2f \n", NomedaCidade1, SuperPower1);
            printf("Cidade 2: %s com Super Power de %.2f \n", NomedaCidade2, SuperPower2);
            if (SuperPower1 > SuperPower2)
            {
                printf("Cidade 1: %s vencedora com Super Power de %.2f \n", NomedaCidade1, SuperPower1);
            }
            else if (SuperPower2 > SuperPower1)
            {
                printf("Cidade 2: %s vencedora com Super Power de %.2f \n", NomedaCidade2, SuperPower2);
            }
            else
            {
                printf("Empate! Ambas as cidades têm o mesmo Super Power de %.2f \n", SuperPower1);
            }
            result1 = SuperPower1 > SuperPower2 ? 1 : 2;
            somavencedor1 = somavencedor1 + SuperPower1;
            somavencedor2 = somavencedor2 + SuperPower2;
            break;
        default:
            // Caso o usuário escolha um número fora do intervalo de 1 a 7, exibir uma mensagem de erro e encerrar o programa
            printf("Opção inválida! Por favor, escolha um número entre 1 e 7 para a comparação. \n");
            break;
        }
        // Realizar as comparações com base no segundo atributo escolhido
        switch (comparacao2)
        {
        case 1:
            // Comparação de população: Cidade com maior população é a vencedora
            printf("### Segunda comparacao de Populacao ###\n");
            printf("Cidade 1: %s com população de %lu habitantes \n", NomedaCidade1, População1);
            printf("Cidade 2: %s com população de %lu habitantes \n", NomedaCidade2, População2);
            if (População1 > População2)
            {
                printf("Cidade 1: %s vencedora com população de %lu habitantes \n", NomedaCidade1, População1);
            }
            else if (População2 > População1)
            {
                printf("Cidade 2: %s vencedora com população de %lu habitantes \n", NomedaCidade2, População2);
            }
            else
            {
                printf("Empate! Ambas as cidades têm a mesma população de %lu habitantes \n", População1);
            }
            result2 = População1 > População2 ? 1 : 2;
            somavencedor1 = somavencedor1 + População1;
            somavencedor2 = somavencedor2 + População2;
            break;
        case 2:
            // Comparação de área: Cidade com maior área é a vencedora
            printf("### Segunda comparacao de Area ###\n");
            printf("Cidade 1: %s com área de %.2f km² \n", NomedaCidade1, Areaemkm1);
            printf("Cidade 2: %s com área de %.2f km² \n", NomedaCidade2, Areaemkm2);
            if (Areaemkm1 > Areaemkm2)
            {
                printf("Cidade 1: %s vencedora com área de %.2f km² \n", NomedaCidade1, Areaemkm1);
            }
            else if (Areaemkm2 > Areaemkm1)
            {
                printf("Cidade 2: %s vencedora com área de %.2f km² \n", NomedaCidade2, Areaemkm2);
            }
            else
            {
                printf("Empate! Ambas as cidades têm a mesma área de %.2f km² \n", Areaemkm1);
            }
            result2 = Areaemkm1 > Areaemkm2 ? 1 : 2;
            somavencedor1 = somavencedor1 + Areaemkm1;
            somavencedor2 = somavencedor2 + Areaemkm2;
            break;
        case 3:
            // Comparação de PIB: Cidade com maior PIB é a vencedora
            printf("### Segunda comparacao de PIB ###\n");
            printf("Cidade 1: %s com PIB de %.2f bilhões de reais \n", NomedaCidade1, PIB1);
            printf("Cidade 2: %s com PIB de %.2f bilhões de reais \n", NomedaCidade2, PIB2);
            if (PIB1 > PIB2)
            {
                printf("Cidade 1: %s vencedora com PIB de %.2f bilhões de reais \n", NomedaCidade1, PIB1);
            }
            else if (PIB2 > PIB1)
            {
                printf("Cidade 2: %s vencedora com PIB de %.2f bilhões de reais \n", NomedaCidade2, PIB2);
            }
            else
            {
                printf("Empate! Ambas as cidades têm o mesmo PIB de %.2f bilhões de reais \n", PIB1);
            }
            result2 = PIB1 > PIB2 ? 1 : 2;
            somavencedor1 = somavencedor1 + PIB1;
            somavencedor2 = somavencedor2 + PIB2;
            break;
        case 4:
            // Comparação de número de pontos turísticos: Cidade com maior número de pontos turísticos é a vencedora
            printf("### Segunda comparacao de Numero de Pontos Turisticos ###\n");
            printf("Cidade 1: %s com %i pontos turísticos \n", NomedaCidade1, NumerodePontosTuristicos1);
            printf("Cidade 2: %s com %i pontos turísticos \n", NomedaCidade2, NumerodePontosTuristicos2);
            if (NumerodePontosTuristicos1 > NumerodePontosTuristicos2)
            {
                printf("Cidade 1: %s vencedora com %i pontos turísticos \n", NomedaCidade1, NumerodePontosTuristicos1);
            }
            else if (NumerodePontosTuristicos2 > NumerodePontosTuristicos1)
            {
                printf("Cidade 2: %s vencedora com %i pontos turísticos \n", NomedaCidade2, NumerodePontosTuristicos2);
            }
            else
            {
                printf("Empate! Ambas as cidades têm o mesmo número de pontos turísticos: %i \n", NumerodePontosTuristicos1);
            }
            result2 = NumerodePontosTuristicos1 > NumerodePontosTuristicos2 ? 1 : 2;
            somavencedor1 = somavencedor1 + NumerodePontosTuristicos1;
            somavencedor2 = somavencedor2 + NumerodePontosTuristicos2;
            break;
        case 5:
            // Comparação de densidade populacional: Cidade com menor densidade populacional é a vencedora
            printf("### Segunda comparacao de Densidade Populacional ###\n");
            printf("Cidade 1: %s com densidade populacional de %.2f habitantes/km² \n", NomedaCidade1, DensidadePopulacional1);
            printf("Cidade 2: %s com densidade populacional de %.2f habitantes/km² \n", NomedaCidade2, DensidadePopulacional2);
            if (DensidadePopulacional1 < DensidadePopulacional2)
            {
                printf("Cidade 1: %s vencedora com densidade populacional de %.2f habitantes/km² \n", NomedaCidade1, DensidadePopulacional1);
            }
            else if (DensidadePopulacional2 < DensidadePopulacional1)
            {
                printf("Cidade 2: %s vencedora com densidade populacional de %.2f habitantes/km² \n", NomedaCidade2, DensidadePopulacional2);
            }
            else
            {
                printf("Empate! Ambas as cidades têm a mesma densidade populacional de %.2f habitantes/km² \n", DensidadePopulacional1);
            }
            result2 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 2;
            somavencedor1 = somavencedor1 - DensidadePopulacional1;
            somavencedor2 = somavencedor2 - DensidadePopulacional2;
            break;
        case 6:
            // Comparação de PIB per Capita: Cidade com maior PIB per Capita é a vencedora
            printf("### Segunda comparacao de PIB per Capita ###\n");
            printf("Cidade 1: %s com PIB per Capita de %.2f reais \n", NomedaCidade1, PIBperCapita1);
            printf("Cidade 2: %s com PIB per Capita de %.2f reais \n", NomedaCidade2, PIBperCapita2);
            if (PIBperCapita1 > PIBperCapita2)
            {
                printf("Cidade 1: %s vencedora com PIB per Capita de %.2f reais \n", NomedaCidade1, PIBperCapita1);
            }
            else if (PIBperCapita2 > PIBperCapita1)
            {
                printf("Cidade 2: %s vencedora com PIB per Capita de %.2f reais \n", NomedaCidade2, PIBperCapita2);
            }
            else
            {
                printf("Empate! Ambas as cidades têm o mesmo PIB per Capita de %.2f reais \n", PIBperCapita1);
            }
            result2 = PIBperCapita1 > PIBperCapita2 ? 1 : 2;
            somavencedor1 = somavencedor1 + PIBperCapita1;
            somavencedor2 = somavencedor2 + PIBperCapita2;
            break;
        case 7:
            // Comparação de Super Power: Cidade com maior Super Power é a vencedora
            printf("### Segunda comparacao de Super Power ###\n");
            printf("Cidade 1: %s com Super Power de %.2f \n", NomedaCidade1, SuperPower1);
            printf("Cidade 2: %s com Super Power de %.2f \n", NomedaCidade2, SuperPower2);
            if (SuperPower1 > SuperPower2)
            {
                printf("Cidade 1: %s vencedora com Super Power de %.2f \n", NomedaCidade1, SuperPower1);
            }
            else if (SuperPower2 > SuperPower1)
            {
                printf("Cidade 2: %s vencedora com Super Power de %.2f \n", NomedaCidade2, SuperPower2);
            }
            else
            {
                printf("Empate! Ambas as cidades têm o mesmo Super Power de %.2f \n", SuperPower1);
            }
            result2 = SuperPower1 > SuperPower2 ? 1 : 2;
            somavencedor1 = somavencedor1 + SuperPower1;
            somavencedor2 = somavencedor2 + SuperPower2;
            break;
            // Caso o usuário escolha um número fora do intervalo de 1 a 7, exibir uma mensagem de erro e encerrar o programa
        default:
            break;
        }

        // Determinar o vencedor final com base nos resultados das comparações e na pontuação acumulada
        // Se ambos os resultados das comparações forem iguais a 1, a cidade vencedora é aquela que ganhou ambas as comparações
        if ((result1 == result2) && (result1 == 1))
        {
            printf("### Resultado Final: Cidade %s é a vencedora! ###\n", NomedaCidade1);
            printf("### Pontuação Final: Cidade %s com %.2f pontos x Cidade %s com %.2f pontos ###\n", NomedaCidade1, somavencedor1, NomedaCidade2, somavencedor2);
        }
        // Se ambos os resultados das comparações forem iguais a 2, a cidade vencedora é aquela que ganhou ambas as comparações
        else if ((result1 == result2) && (result1 == 2))
        {
            printf("### Resultado Final: Cidade %s é a vencedora! ###\n", NomedaCidade2);
            printf("### Pontuação Final: Cidade %s com %.2f pontos x Cidade %s com %.2f pontos ###\n", NomedaCidade2, somavencedor2, NomedaCidade1, somavencedor1);
        }
        else
        // Se os resultados das comparações forem diferentes, a cidade vencedora é aquela que tiver a maior pontuação acumulada
        {
            if (somavencedor1 > somavencedor2)
            // Cidade 1 é a vencedora por pontuação
            {
                printf("### Resultado Final: Cidade %s é a vencedora por pontuação! ###\n", NomedaCidade1);
                printf("### Pontuação Final: Cidade %s com %.2f pontos x Cidade %s com %.2f pontos ###\n", NomedaCidade1, somavencedor1, NomedaCidade2, somavencedor2);
            }
            else if (somavencedor2 > somavencedor1)
            // Cidade 2 é a vencedora por pontuação
            {
                printf("### Resultado Final: Cidade %s é a vencedora por pontuação! ###\n", NomedaCidade2);
                printf("### Pontuação Final: Cidade %s com %.2f pontos x Cidade %s com %.2f pontos ###\n", NomedaCidade2, somavencedor2, NomedaCidade1, somavencedor1);
            }
            else
            // Empate por pontuação
            {
                printf("### Resultado Final: Empate! Ambas as cidades têm a mesma pontuação de %.2f pontos ###\n", somavencedor1);
            }
        }
    }
}