#include <stdio.h>



int main() {

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;

    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

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

    pibPerCapita1 = pib1/populacao1;
    densidadePopulacional1 = populacao1/area1;


    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
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

    pibPerCapita2 = pib2/populacao2;
    densidadePopulacional2 = populacao2/area2;


    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);



    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
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
    printf("População: Carta %d venceu (%d)\n", 2 -populacaoVencedora, populacaoVencedora );
    int areaVencedora = area1 > area2;
    printf("Area: Carta %d venceu (%d)\n", 2 -areaVencedora, areaVencedora );
    int pibVencedor = pib1 > pib2;
    printf("PIB: Carta %d venceu (%d)\n", 2 -pibVencedor, pibVencedor );
    int pontosVencedor = pontosTuristicos1 > pontosTuristicos2;
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", 2 -pontosVencedor, pontosVencedor );
    int densidadeVencedora = densidadePopulacional1 < densidadePopulacional2;
    printf("Densidade Demografica: Carta %d venceu (%d)\n", 2 -densidadeVencedora, densidadeVencedora );
    int pibPerCapitaVencedor = pibPerCapita1 > pibPerCapita2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", 2 -pibPerCapitaVencedor, pibPerCapitaVencedor );
    int superPoderVencedor = superPoder1 > superPoder2;
    printf("Super Poder: Carta %d venceu (%d)\n", 2 -superPoderVencedor, superPoderVencedor );

    printf("*******Comparação por área*******\n");
    printf("Carta 1 - %s : %.2f\n", &estado1,  area1);
    printf("Carta 2 - %s : %.2f\n", &estado2, area2);

    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", &estado1);
    }else {
        printf("Resultado: Carta 2 (%s) venceu!\n", &estado2);
    }



    return 0;
}