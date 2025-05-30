#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

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
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
     // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Turismo: %d\n", turismo1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Turismo: %d\n", turismo2);

    return 0;
}
