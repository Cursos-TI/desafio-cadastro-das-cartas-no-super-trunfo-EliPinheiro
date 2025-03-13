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
    int opcaoEscolhida1, opcaoEscolhida2;
    char atributoEscolhido1, atributoEscolhida2;
    float total1, total2;


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


    printf("*******Comparação 1*******\n");
    printf("Qual atributo você deseja comparar? \n");
    printf("1 - População. \n");
    printf("2 - Área. \n");
    printf("3 - PIB. \n");
    printf("4 - Número de pontos turísticos. \n");
    printf("5 - Densidade demográfica. \n");
    scanf("%d", &opcaoEscolhida1);

    printf("*******Comparação 2*******\n");
    printf("Qual atributo você deseja comparar? \n");
    printf("1 - População. \n");
    printf("2 - Área. \n");
    printf("3 - PIB. \n");
    printf("4 - Número de pontos turísticos. \n");
    printf("5 - Densidade demográfica. \n");
    scanf("%d", &opcaoEscolhida2);





    if (opcaoEscolhida1 != opcaoEscolhida2) {

    switch (opcaoEscolhida1) {
        case 1:

            atributoEscolhido1 = "População";
            total1 = populacao1;
            total2 = populacao2;

            break;
        case 2:
            atributoEscolhido1 = "Área";

            total1 = area1;
            total2 = area2;
            break;
        case 3:
            atributoEscolhido1 = "PIB";


            total1 = pib1;
            total2 = pib2;

            break;
        case 4:
            atributoEscolhido1 = "Número de pontos turísticos";
            total1 = pontosTuristicos1;
            total2 = pontosTuristicos2;
            break;
        case 5:
            atributoEscolhido1 = "Densidade Demográfica";

            total1 = densidadePopulacional1;
            total2 = densidadePopulacional2;
            break;
        default:
            printf("Nenhum número foi escolhido.");
    }
    switch (opcaoEscolhida2) {
        case 1:

            atributoEscolhido1 = "População";
            total1 += populacao1;
            total2 += populacao2;

            break;
        case 2:
            atributoEscolhido1 = "Área";

            total1 += area1;
            total2 += area2;
            break;
        case 3:
            atributoEscolhido1 = "PIB";


            total1 += pib1;
            total2 += pib2;

            break;
        case 4:
            atributoEscolhido1 = "Número de pontos turísticos";
            total1 += pontosTuristicos1;
            total2 += pontosTuristicos2;
            break;
        case 5:
            atributoEscolhido1 = "Densidade Demográfica";

            total1 += densidadePopulacional1;
            total2 += densidadePopulacional2;
            break;
        default:
            printf("Nenhum número foi escolhido.\n");
    }

        printf("Nomes dos países: %s - %s\n", pais1, pais2);
        printf("O primeiro atributo usado para a comparação é o %s e o segunfo é o %s\n", &atributoEscolhido1, &atributoEscolhida2);
        if (total1 != total2) {
            printf("O total da Carta 1 é %f e o total da Carta 2 é %f.\n", total1, total2);
            char *vencedora = total1 > total2 ? "Carta 1" : "Carta 2";
            printf("A %s Venceu!\n", vencedora);

        }else {
            printf("Empate!");
        }


    }else {
        printf("Jogo finalizado, pois não é permitida a comparação do mesmo atributo");
    }


    return 0;
}
