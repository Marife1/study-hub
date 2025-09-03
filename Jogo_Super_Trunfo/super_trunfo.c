#include <stdio.h>

int main() {
   char estado1[3];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a Carta 2
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // --- Leitura da Carta 1 ---
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf("%s", estado1);

    printf("Codigo da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // --- Leitura da Carta 2 ---
    printf("Digite os dados da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf("%s", estado2);

    printf("Codigo da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n--- Cartas Cadastradas ---\n");

    // --- Exibição da Carta 1 ---
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontosTuristicos1);

    // --- Exibição da Carta 2 ---
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    printf("\n-----Comparação de Cartas-----\n");

    // --- comparação de cartas ---
    if (populacao1 < populacao2) {
        printf("Carta 1 - %s (%s): %d Venceu!\n", cidade1, estado1, populacao1); //comparando e apresentando no final
    }
    else {
        printf("Carta 2 - %s (%s): %d Venceu!\n", cidade2, estado2, populacao2);
    }

    if (pib1 > pib2) {
        printf("Carta 1 - %s (%s): %.2f Venceu!\n", cidade1, estado1, pib1);
    }
    else {
        printf("Carta 2 - %s (%s): %.2f Venceu!\n", cidade2, estado2, pib2);
    
    }
    return 0;
}