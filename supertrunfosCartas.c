#include <stdio.h>

// desafio super trunfo, 2 cartas iniciais, dia 07/08
int main() {
// carta 1 
    char estado1 = "B";
    char codigo1[20] = "B01";
    char cidade1[50] = "salvador";
    int população1 = 2418005;
    float km1 = 693.8;
    float pib1 = 62.9;
    int turisticos1 = 20; 

// carta 2

    char estado2 = "A";
    char codigo2[20] = "A01";
    char cidade2[50] = "Curitiba";
    int  população2 = 1964787;
    int km2 = 432; 
    int pib2 = 98;
    int turismo2 = 30;

// Entrada de dados da carta 1
    printf("=== Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area em km²: ");
    scanf("%f", &km1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &turisticos1);

    // Entrada de dados da carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area em km²: ");
    scanf("%f", &km2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &turisticos2);

    // Mostrando os dados
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.1f km²\n", km1);
    printf("PIB: %.1f\n", pib1);
    printf("Pontos turisticos: %d\n", turisticos1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.1f km²\n", km2);
    printf("PIB: %.1f\n", pib2);
    printf("Pontos turisticos: %d\n", turisticos2);

    return 0;
}










