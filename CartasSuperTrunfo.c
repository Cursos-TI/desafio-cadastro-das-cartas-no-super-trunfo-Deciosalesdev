#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Dados fixos
    // Carta 1
    char estado1[50] = "São Paulo";
    char cidade1[50] = "São Bernardo do Campo";
    char codigo1[10] = "A01";
    //Carta2
    char estado2[50] = "Rio de Janeiro";
    char cidade2[50] = "Rio de Janeiro";
    char codigo2[10] = "B02";

    // Dados que serão inseridos pelo usuário
    unsigned int populacao1, populacao2;
    int populacao1, turismo1;
    float area1, pib1;

    int populacao2, turismo2;
    float area2, pib2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
     // Entrada de dados variáveis - Carta 1
    printf("Informe os dados da Carta 1 (%s - %s):\n", estado1, cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &turismo1);

    // Entrada de dados variáveis - Carta 2
    printf("\nInforme os dados da Carta 2 (%s - %s):\n", estado2, cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &turismo2);

    // Cálculos - Carta 1
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    // Cálculos - Carta 2
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    //Super Poder
    float super_poder1 = populacao1 + area1 + pib1 + turismo1 + pib_per_capita1 + (1.0f / densidade1);
    float super_poder2 = populacao2 + area2 + pib2 + turismo2 + pib_per_capita2 + (1.0f / densidade2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
     
    // Exibição das cartas
    //Exibição - Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB: %.2f\n", pib1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Turismo: %d\n", turismo1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição - Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Turismo: %d\n", turismo2);
    printf("Super Poder: %.2f\n", super_poder2);

    //Comparações
    printf("Comparações das Cartas\n");
    printf("População: Venceu %d\n", populacao1 > populacao2);
    printf("Área: Venceu %d\n", area1 > area2);
    printf("PIB: Venceu %d\n", pib1 > pib2);
    printf("Turismo: Venceu %d\n", turismo1 > turismo2);
    printf("Densdade Populacional: Venceu %d\n", densidade1 < densidade2);
    printf("PIB per Capta: Venceu %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Venceu %d\n", super_poder1 > super_poder2);


    return 0;
}