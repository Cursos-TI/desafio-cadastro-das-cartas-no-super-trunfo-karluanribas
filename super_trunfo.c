#include <stdio.h>

int main() {
    // ----------- Carta 1 -----------
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // ----------- Carta 2 -----------
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ----------------- Entrada Carta 1 -----------------
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (letra): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ----------------- Entrada Carta 2 -----------------
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado (letra): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ----------------- Cálculos -----------------
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB em reais per capita
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // ----------------- Resultados -----------------
    printf("\n\n=== Resultados das Cartas ===\n");

    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    // ----------------- Comparações -----------------
    printf("\n\n=== Comparação entre as Cartas ===\n");

    printf("População: %s vence!\n",
        (populacao1 > populacao2) ? cidade1 :
        (populacao2 > populacao1) ? cidade2 : "Empate");

    printf("Área: %s vence!\n",
        (area1 > area2) ? cidade1 :
        (area2 > area1) ? cidade2 : "Empate");

    printf("PIB: %s vence!\n",
        (pib1 > pib2) ? cidade1 :
        (pib2 > pib1) ? cidade2 : "Empate");

    printf("PIB per Capita: %s vence!\n",
        (pibPerCapita1 > pibPerCapita2) ? cidade1 :
        (pibPerCapita2 > pibPerCapita1) ? cidade2 : "Empate");

    printf("Pontos Turísticos: %s vence!\n",
        (pontosTuristicos1 > pontosTuristicos2) ? cidade1 :
        (pontosTuristicos2 > pontosTuristicos1) ? cidade2 : "Empate");

    printf("Densidade Populacional: %s vence! (menor densidade é melhor)\n",
        (densidade1 < densidade2) ? cidade1 :
        (densidade2 < densidade1) ? cidade2 : "Empate");

    return 0;
}
