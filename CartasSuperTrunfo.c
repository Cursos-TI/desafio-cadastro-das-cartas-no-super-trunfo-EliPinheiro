#include <stdio.h>


int main() {
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    signed int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    char pais1[10], pais2[10];
    int opcaoEscolhida;
    char atributoEscolhido;


    printf("Cadastro da Carta 1:\n");
    printf("Pais : ");
    scanf(" %s", &pais1);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", &codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", &nomeCidade1);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área (km²): ");
    scanf(" %f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    pibPerCapita1 = pib1 / populacao1;
    densidadePopulacional1 = populacao1 / area1;
    superPoder1 = (float) populacao1 + area1 + pibPerCapita1 + pontosTuristicos1 - densidadePopulacional1;
    printf("%2.f", superPoder1);


    printf("\nCadastro da Carta 2:\n");
    printf("Pais : ");
    scanf(" %s"
          "", &pais2);
    printf("Código da Carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área (km²): ");
    scanf(" %f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    pibPerCapita2 = pib2 / populacao2;
    densidadePopulacional2 = populacao2 / area2;
    superPoder2 = (float) populacao2 + area2 + pibPerCapita2 + pibPerCapita2 - densidadePopulacional2;
    printf("%.2f", superPoder2);


    printf("\nCarta 1:\n");
    printf("Pais : %c\n", pais1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", pais2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    printf("----------Comparação de Cartas:----------\n");
    int populacaoVencedora = populacao1 > populacao2;
    printf("População: Carta %d venceu (%d)\n", 2 - populacaoVencedora, populacaoVencedora);
    int areaVencedora = area1 > area2;
    printf("Area: Carta %d venceu (%d)\n", 2 - areaVencedora, areaVencedora);
    int pibVencedor = pib1 > pib2;
    printf("PIB: Carta %d venceu (%d)\n", 2 - pibVencedor, pibVencedor);
    int pontosVencedor = pontosTuristicos1 > pontosTuristicos2;
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", 2 - pontosVencedor, pontosVencedor);
    int densidadeVencedora = densidadePopulacional1 < densidadePopulacional2;
    printf("Densidade Demografica: Carta %d venceu (%d)\n", 2 - densidadeVencedora, densidadeVencedora);
    int pibPerCapitaVencedor = pibPerCapita1 > pibPerCapita2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - pibPerCapitaVencedor, pibPerCapitaVencedor);
    int superPoderVencedor = superPoder1 > superPoder2;
    printf("Super Poder: Carta %d venceu (%d)\n", 2 - superPoderVencedor, superPoderVencedor);


    printf("*******Comparação por área*******\n");
    printf("Qual atributo você deseja comparar? \n");
    printf("1 - População. \n");
    printf("2 - Área. \n");
    printf("3 - PIB. \n");
    printf("4 - Número de pontos turísticos. \n");
    printf("5 - Densidade demográfica. \n");
    scanf("%d", &opcaoEscolhida);


    printf("Nomes dos países: %s - %s\n", pais1, pais2);
    printf("O atributo usado para a comparação é o %s", &atributoEscolhido);

    switch (opcaoEscolhida) {
        case 1:

            atributoEscolhido = "População";

            printf("O atributo usado para a comparação é o %s", &atributoEscolhido);
            printf("Carta 1 = %d - Carta 2 = %d", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("A Carta 1 venceu!!");
            } else if (populacao2 == populacao1) {
                printf("Empate!");
            } else {
                printf("A Carta 2 venceu!!");
            }
            break;
        case 2:
            atributoEscolhido = "Área";

            printf("O atributo usado para a comparação é o %s", &atributoEscolhido);
            printf("Carta 1 = %f - Carta 2 = %f", area1, area2);
            if (area1 > area2) {
                printf("A Carta 1 venceu!!");
            } else if (area1 == area2) {
                printf("Empate!");
            } else {
                printf("A Carta 2 venceu!!");
            }
            break;
        case 3:
            atributoEscolhido = "PIB";

            printf("O atributo usado para a comparação é o %s", &atributoEscolhido);
            printf("Carta 1 = %f - Carta 2 = %f", pib1, pib2);
            if (pib1 > pib2) {
                printf("A Carta 1 venceu!!");
            } else if (pib1 == pib2) {
                printf("Empate!");
            } else {
                printf("A Carta 2 venceu!!");
            }

            break;
        case 4:
            atributoEscolhido = "Número de pontos turísticos";

            printf("O atributo usado para a comparação é o %s", &atributoEscolhido);
            printf("Carta 1 = %d - Carta 2 = %d", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("A Carta 1 venceu!!");
            } else if (pontosTuristicos1 == pontosTuristicos2) {
                printf("Empate!");
            } else {
                printf("A Carta 2 venceu!!");
            }
            break;
        case 5:
            atributoEscolhido = "Densidade Demográfica";

            printf("O atributo usado para a comparação é o %s", &atributoEscolhido);
            printf("Carta 1 = %f - Carta 2 = %f", densidadePopulacional1, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("A Carta 1 venceu!!");
            } else if (densidadePopulacional1 == densidadePopulacional2) {
                printf("Empate!");
            } else {
                printf("A Carta 2 venceu!!");
            }
            break;
        default:
            printf("Nenhum número foi escolhido.");
    }


    return 0;
}
