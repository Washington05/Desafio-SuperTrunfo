#include <stdio.h>

int main() {
    // Carta 1
    char carta1;
    char estado1;
    char codigoCarta1[5]; 
    char nomeCidade1[20];
    int populacao1;
    float areaKm1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char carta2;
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[20];
    int populacao2;
    float areaKm2;
    float pib2;
    int pontosTuristicos2;

    printf("Bem Vindo Ao Super Trufo.\n");

    // --------- Carta 1 ---------
    printf("Cadastrar Carta 1: ");
    scanf(" %c", &carta1); // espaço antes de %c para consumir '\n'

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%4s", codigoCarta1);

    printf("Digite o nome da Cidade: ");
    scanf("%19s", nomeCidade1); // Limita entrada para evitar overflow

    printf("Digite o numero de habitantes da Cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade em quilômetros quadrados: ");
    scanf("%f", &areaKm1);

    printf("Digite o tamanho bruto do PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos1);

    // --------- Carta 2 ---------
    printf("\nCadastrar Carta 2: ");
    scanf(" %c", &carta2);

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%4s", codigoCarta2);

    printf("Digite o nome da Cidade: ");
    scanf("%19s", nomeCidade2);

    printf("Digite o numero de habitantes da Cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em quilômetros quadrados: ");
    scanf("%f", &areaKm2);

    printf("Digite o tamanho bruto do PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);
    
    
    // --------- Exibir Cartas ---------
    
    printf("\n-------------------------------\n");
    printf("      CARTA 1 - CIDADE %c\n", carta1);
    printf("-------------------------------\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", areaKm1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n-------------------------------\n");
    printf("      CARTA 2 - CIDADE %c\n", carta2);
    printf("-------------------------------\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}