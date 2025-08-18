#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo 
// Desafio: nível novato - Criando as Cartas do Super Trunfo
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Teste Bruno

int main() {
    
    //dados carta1
    int pontos_turisticos_1;
    int populacao_1;
    float area_1;
    float pib_1;
    char estado_1 [50];
    char codigo_1 [50];
    char cidade_1 [50];

    //dados carta2
    int pontos_turisticos_2;
    int populacao_2;
    float area_2;
    float pib_2;
    char estado_2 [50];
    char codigo_2 [50];
    char cidade_2 [50];

    // Entrada dos dados da carta 1
    printf("Entre com os dados da carta 1: \n");
    printf("Digite o Estado: \n");
    fgets(estado_1, sizeof(estado_1), stdin);
    estado_1[strcspn(estado_1, "\n")] = '\0';
    
    printf("Digite o Código da Carta: \n");
    fgets(codigo_1, sizeof(codigo_1), stdin);
    codigo_1[strcspn(codigo_1, "\n")] = '\0';
    
    printf("Digite o Nome da Cidade: \n");
    fgets(cidade_1, sizeof(cidade_1), stdin);
    cidade_1[strcspn(cidade_1, "\n")] = '\0';
    
    printf("Digite a População: \n");
    scanf("%d", &populacao_1);

    printf("Digite a Área: \n");
    scanf("%f", &area_1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_1);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_1);
    getchar();

    // Entrada dos dados da carta 2
    printf("Entre com os dados da carta 2: \n");
    printf("Digite o Estado: \n");
    fgets(estado_2, sizeof(estado_2), stdin);
    estado_2[strcspn(estado_2, "\n")] = '\0';
    
    printf("Digite o Código da Carta: \n");
    fgets(codigo_2, sizeof(codigo_2), stdin);
    codigo_2[strcspn(codigo_2, "\n")] = '\0';
    
    printf("Digite o Nome da Cidade: \n");
    fgets(cidade_2, sizeof(cidade_2), stdin);
    cidade_2[strcspn(cidade_2, "\n")] = '\0';

    printf("Digite a População: \n");
    scanf("%d", &populacao_2);

    printf("Digite a Área: \n");
    scanf("%f", &area_2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_2);

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_2);
    
    //Impressão dos dados da carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado_1);
    printf("Código: %s%s\n", estado_1,codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n\n", pontos_turisticos_1);
    
    //Impressão dos dados da carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s%s\n", estado_2,codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d", pontos_turisticos_2);
    
    return 0;
}
