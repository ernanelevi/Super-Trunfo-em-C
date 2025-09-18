#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2, codigo1[2], codigo2[2], n_cidade1[50], n_cidade2[50];
    int populacao1, populacao2, p_turisticos1, p_turisticos2;
    float area1, area2, pib1, pib2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("==================== CADASTRO DA CARTA 1 ====================\n");

    printf("Digite o ESTADO da primeira cata (A - H): ");
    scanf("%c", &estado1);

    printf("Digite o CÓDIGO da primeira carta (01 - 02): ");
    scanf("%s", &codigo1);
    getchar();

    printf("Digite o NOME da cidade da primeira carta: ");
    fgets(n_cidade1, 50, stdin);

    printf("Digite a POPULAÇÃO da primeira carta: ");
    scanf("%d", &populacao1);

    printf("Digite a ÁREA da primeira carta: ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);

    printf("Digite o número de PONTOS TURÍSTICOS da primeira carta: ");
    scanf("%d", &p_turisticos1);
    getchar();

    printf("==================== CADASTRO DA CARTA 2 ====================\n");

    printf("Digite o ESTADO da segunda cata (A - H): ");
    scanf("%c", &estado2);

    printf("Digite o CÓDIGO da segunda carta (01 - 02): ");
    scanf("%s", &codigo2);
    getchar();

    printf("Digite o NOME da cidade da segunda carta: ");
    fgets(n_cidade2, 50, stdin);

    printf("Digite a POPULAÇÃO da segunda carta: ");
    scanf("%d", &populacao2);

    printf("Digite a ÁREA da segunda carta: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);

    printf("Digite o número de PONTOS TURÍSTICOS da segunda carta: ");
    scanf("%d", &p_turisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("========== CARTA 1 ==========\n");

    printf("Estado: %c\n", estado1);

    printf("Código: %c%s\n", estado1, codigo1);

    printf("Nome da Cidade: %s", n_cidade1);

    printf("População: %d\n", populacao1);

    printf("Área: %.2f Km²\n", area1);

    printf("PIB: %.2f Bilhões de reais\n", pib1);

    printf("Pontos Turísticos: %d\n", p_turisticos1);

    printf("========== CARTA 2 ==========\n");

    printf("Estado: %c\n", estado2);

    printf("Código: %c%s\n", estado2, codigo2);

    printf("Nome da Cidade: %s", n_cidade2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f Km²\n", area2);

    printf("PIB: %.2f Bilhões de reais\n", pib2);

    printf("Pontos Turísticos: %d\n", p_turisticos2);

    return 0;
}
