#include <stdio.h>
#include <string.h> // Necessário para strcspn

int main() {
    // --------- Carta 1 ---------
    char carta1, estado1;
    char codigoCarta1[5], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float areaKm1, pib1;

    // --------- Carta 2 ---------
    char carta2, estado2;
    char codigoCarta2[5], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float areaKm2, pib2;

    // Cabeçalho
    printf("****** Bem Vindo Ao Super Trufo ******\n");

    // --------- Entrada Carta 1 ---------
    printf("\nCadastrar Carta 1:\n");

    printf("Digite a letra identificadora da carta: ");
    scanf(" %c", &carta1);

    printf("Digite uma letra de 'A' a 'H' (estado): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%4s", codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf(" "); // Limpa o buffer
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0'; // Remove o '\n'

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &areaKm1);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    float densidadePopulacional1 = populacao1 / areaKm1;
    float pibCapita1 = pib1 * 1e9 / populacao1; // Convertendo bilhões para reais

    // --------- Entrada Carta 2 ---------
    printf("\nCadastrar Carta 2:\n");

    printf("Digite a letra identificadora da carta: ");
    scanf(" %c", &carta2);

    printf("Digite uma letra de 'A' a 'H' (estado): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%4s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf(" ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &areaKm2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    float densidadePopulacional2 = populacao2 / areaKm2;
    float pibCapita2 = pib2 * 1e9 / populacao2;

    // --------- Exibição das Cartas ---------
    printf("\n-------------------------------\n");
    printf("  CARTA 1 - CIDADE %c\n", carta1);
    printf("-------------------------------\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", areaKm1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibCapita1);

    printf("\n-------------------------------\n");
    printf("  CARTA 2 - CIDADE %c\n", carta2);
    printf("-------------------------------\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibCapita2);

    return 0;
}
