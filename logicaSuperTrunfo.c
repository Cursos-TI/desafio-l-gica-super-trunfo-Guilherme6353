#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int opcao, populacao1, populacao2, num_Pontos_turisticos1, num_pont_turisticos2;
    float area1, area2, pib1, pib2;
    char carta1[5], carta2[5];
    char pais1[50], pais2[50];
    char codigo1[5], codigo2[5];
    float densidade1 = populacao1 / area1, densidade2 = populacao2 / area2;

     printf("Informe o nome da 1º País: ");
    scanf(" %99[^\n]", &pais1); // Lê até a quebra de linha, com espaço para consumir resíduos do buffer.

    printf("informe a população: ");
    scanf("%d", &populacao1);

    printf("Informe o número da Carta: ");
    scanf("%d", &carta1);

    printf("Informe o código da Cidade: ");
    scanf(" %s", &codigo1);

    printf("Informe a número de pontos turísticos: ");
    scanf(" %d", &num_Pontos_turisticos1);

    printf("Informe a área: ");
    scanf("%f", &area1);

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe o nome da 2º País: ");
    scanf(" %99[^\n]", &pais2); // Lê até a quebra de linha, com espaço para consumir resíduos do buffer.

    printf("informe a população: ");
    scanf("%d", &populacao2);

    printf("Informe o número da Carta: ");
    scanf("%d", &carta2);

    printf("Informe o código da Cidade: ");
    scanf(" %s", &codigo2);

    printf("Informe a número de pontos turísticos: ");
    scanf(" %d", &num_pont_turisticos2);

    printf("Informe a área: ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("______________________________________________________\n");

    printf("--- Comparação entre os Países ---\n");
    printf("Escolha uma das opções para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    printf("\n");
    printf("%s Vs %s\n", pais1, pais2);
    switch (opcao) {
        case 1:
        if (populacao1 > populacao2) {
            printf("O PAÍS VENCEDOR É: %s\n", pais1);
        } else if (populacao2 > populacao1)
        {
            printf("O PAÍS VENCEDOR É: %s\n", pais2);
        } else {
            printf("*EMPATE*\n");
        }
        break;
        case 2:
        if (area1 > area2) {
            printf("O PAÍS VENCEDOR É: %s\n", pais1 );
        } else if (area2 > area1)
        {
            printf("O PAÍS VENCEDOR É: %s\n", pais2);
        } else {
            printf("*EMPATE*\n");
        }
        break;
        case 3:
        if (pib1 > pib2) {
            printf("O PAÍS VENCEDOR É: %s\n", pais1);
        } else if (pib2 > pib1)
        {
            printf("O PAÍS VENCEDOR É: %s\n", pais2);
        } else {
            printf("*EMPATE*\n");
        }
        break;
        case 4:
        if (num_Pontos_turisticos1 > num_pont_turisticos2) {
            printf("O PAÍS VENCEDOR É: %s\n", pais1);
        } else if (num_pont_turisticos2 > num_Pontos_turisticos1) {
            printf("O PAÍS VENCEDOR É: %s\n", pais2);
        } else {
            printf("*EMPATE*\n");
        }
        break;
        case 5:
        if (densidade1 < densidade2) {
            printf("O PAÍS VENCEDOR É: %s\n", pais1);
        } else if (densidade2 < densidade1)
        {
            printf("O PAÍS VENCEDOR É: %s\n", pais2);
        } else {
            printf("*EMPATE*\n");
        }
        break;
        default:
        printf("Opção inválida.\n");
        break;
    }

    return 0;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    
}
