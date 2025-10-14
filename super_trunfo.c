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

    // ----------------- Escolha de Categoria -----------------
    int categoria;
    printf("\nEscolha uma categoria para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("Digite o número da categoria: ");
    scanf("%d", &categoria);

    // ----------------- Comparação -----------------
    printf("\n=== Resultado da Comparação ===\n");
    switch (categoria) {
        case 1:
            printf("Categoria: População\n");
            if (populacao1 > populacao2)
                printf("Vencedora: %s (Carta 1)\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedora: %s (Carta 2)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Categoria: Área\n");
            if (area1 > area2)
                printf("Vencedora: %s (Carta 1)\n", cidade1);
            else if (area2 > area1)
                printf("Vencedora: %s (Carta 2)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Categoria: PIB\n");
            if (pib1 > pib2)
                printf("Vencedora: %s (Carta 1)\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedora: %s (Carta 2)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Categoria: Pontos Turísticos\n");
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedora: %s (Carta 1)\n", cidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedora: %s (Carta 2)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
