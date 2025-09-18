#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2, codigo1[3], codigo2[3], n_cidade1[50], n_cidade2[50];
    int populacao1, populacao2, p_turisticos1, p_turistico2;
    float area1, area2, pib1, pib2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("==================== CADASTRO DA CARTA 1 ====================\n");

    printf("Digite o ESTADO da primeira cata (A - H): ");
    scanf("%c", &estado1);

    printf("Digite o CÓDIGO da primeira carta (A01 - H02): ");
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

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
